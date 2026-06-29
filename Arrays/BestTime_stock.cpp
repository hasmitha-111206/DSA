#include <vector>
using namespace std;
class solution
{
public:
    int Maxprofit(vector<int> &prices)
    {
        int minprice = prices[0];
        int maxprofit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            minprice = min(prices[i], minprice);
            int profit = prices[i] - minprice;
            maxprofit = max(profit, maxprofit);
        }
        return maxprofit;
    }
};