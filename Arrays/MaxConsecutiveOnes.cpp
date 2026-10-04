#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int MaxConsecutive(vector<int> &nums)
    {
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else if (nums[i] == 0)
            {
                count = 0;
            }
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};