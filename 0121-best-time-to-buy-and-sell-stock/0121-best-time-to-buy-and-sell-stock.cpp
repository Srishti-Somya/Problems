class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // //building intuition
        // //the minimum selling price day jaise hi update ho, hum usse hi sellday
        // //bana dein, and ab uske baad condition check karein
        // // if sellday ya current price agar bada hai toh update sellday, then 
        // // then calculate cost, and maintain maximum

        // int bestBuy = prices[0];
        // int maxProfit = 0;

        // for( int i = 1 ; i < prices.size() ; i++ )
        // {
        //     if(prices[i] > bestBuy)
        //     {
        //         maxProfit = max(maxProfit, prices[i] - bestBuy);
        //     }
        //     bestBuy = min(bestBuy, prices[i]);
        // }
        // return maxProfit;

        int maxprofit = 0, mini = INT_MAX;
        for(int i = 0 ; i < prices.size() ; i++ ){
            mini = min(mini, prices[i]);
            maxprofit = max(maxprofit, prices[i] - mini);
        }
        return maxprofit;
    }
};