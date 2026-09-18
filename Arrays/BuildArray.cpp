#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> Buildarray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};