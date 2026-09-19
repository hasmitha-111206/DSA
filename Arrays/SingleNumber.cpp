#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int single(vector<int> &nums)
    {
        int ans = 0;
        for (int val : nums)
        {
            ans ^= val;
        }
        return ans;
    }
};