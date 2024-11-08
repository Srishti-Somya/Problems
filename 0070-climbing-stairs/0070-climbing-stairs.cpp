class Solution {
public:
    int count(int n, vector<int>&dp)
    {
        if(n < 0)
        {
            return 0;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        if(n == 0)
        {
            return 1;
        }
        int one_step = count(n-1,dp);
        int two_step = count(n-2,dp);

        return dp[n] = dp[n-1]+dp[n-2];
    }
    int climbStairs(int n) {
        vector<int>dp(46 , -1);
        dp[0] = dp[1] = 1;
        return count(n , dp);
    }
};