#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int BestStock(vector<int> &prices)
    {
        int minprice = prices[0];
        int maxprofit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            minprice = min(minprice, prices[i]);
            int price = prices[i] - minprice;
            maxprofit = max(maxprofit, price);
        }
        return maxprofit;
    }
};