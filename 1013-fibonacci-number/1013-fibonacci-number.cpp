class Solution {
public:
    int solve(vector<int> &dp , int n)
    {
        if( n <= 1)
        {
            return n;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        return dp[n] = solve(dp, n-1) + solve(dp, n-2);
    }

    int fib(int n) {
        if( n <= 1)
        {
            return n;
        }
        int a = 0;
        int b = 1;
        int c;
        for( int i = 2; i <= n ; i++ )
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};