class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprofitday = INT_MAX;
        int sellDay = 0;
        int maxprofit = 0;
        for( int i = 0; i < prices.size() ; i++ )
        {
            if(prices[i] < minprofitday)
            {
                minprofitday = prices[i];
                sellDay = minprofitday;
            }
            if(prices[i] > sellDay)
            {
                sellDay = prices[i];
            }
            maxprofit = max(sellDay - minprofitday, maxprofit);
        }
        return maxprofit;
    }
};