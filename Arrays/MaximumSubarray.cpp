#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class solution
{
public:
    int MaximumSubarray(vector<int> &nums)
    {
        int currsum = 0, maxsum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            currsum += nums[i];
            maxsum = max(maxsum, currsum);
            if (currsum < 0)
            {
                currsum = 0;
            }
        }
        return maxsum;
    }
};