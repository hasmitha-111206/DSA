#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void Move(vector<int> &nums)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        while (index < nums.size())
        {
            nums[index] = 0;
            index++;
        }
    }
};