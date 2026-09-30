#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int Evendigits(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int length = 0;
            while (nums[i] != 0)
            {
                int digit = nums[i] % 10;
                length++;
                nums[i] = nums[i] / 10;
            }
            if (length % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};