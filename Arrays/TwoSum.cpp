#include <vector>
#include <unordered_map>
using namespace std;
class solution
{
public:
    vector<int> Twosum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            int com = target - nums[i];
            if (mp.find(com) != mp.end())
            {
                return {mp[com], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
