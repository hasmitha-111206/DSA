#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> Small(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < nums[i])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};