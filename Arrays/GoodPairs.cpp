#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int GoodPairs(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};