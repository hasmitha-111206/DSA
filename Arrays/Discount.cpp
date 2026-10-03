#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> Discount(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = prices[i];
            for (int j = i + 1; j < n; j++)
            {
                if (prices[j] <= prices[i])
                {
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return ans;
    }
};