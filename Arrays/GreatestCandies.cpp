#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<bool> Kids(vector<int> &candies, int extracandies)
    {
        vector<bool> ans(candies.size());
        int maxcandies = candies[0];
        for (int i = 1; i < candies.size(); i++)
        {
            if (candies[i] > maxcandies)
            {
                maxcandies = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extracandies >= maxcandies)
            {
                ans[i] = true;
            }
            else
            {
                ans[i] = false;
            }
        }
        return ans;
    }
};