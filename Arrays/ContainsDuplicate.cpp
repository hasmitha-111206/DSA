#include <vector>
#include <unordered_set>
using namespace std;
class solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.find(num) != seen.end())
            {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};