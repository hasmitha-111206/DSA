#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int Pivot(vector<int> &nums)
    {
        int left = 0, total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total += nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int right = total - left - nums[i];
            if (left == right)
            {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};