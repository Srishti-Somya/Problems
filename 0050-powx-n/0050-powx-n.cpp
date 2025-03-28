class Solution {
public:
    double myPow(double x, int n) {
        if( x == 0)
        {
            return double(0);
        }
        if(x == 1)
        {
            return 1;
        }
        if(n == 0)
        {
            return 1;
        }
        double ans = 1;
        long bin = n;
        if(bin < 0)
        {
            x = 1/x;
            bin = -bin;
        }

        while(bin)
        {
            if(bin%2 == 1)
            {
                ans *= x;
            }
            x *= x;
            bin /= 2;
        }    
        return ans;
    }
};