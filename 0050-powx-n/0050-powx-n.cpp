class Solution {
public:
    double myPow(double x, int n) {
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