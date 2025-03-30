class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start >= 0 && goal >= 0)
        {
            if(start == 0 && goal == 0)
            {
                break;
            }
            int rem1 = start % 2;
            int rem2 = goal % 2;
            if(rem1 != rem2)
            {
                ans++;
            }
            start /= 2;
            goal /= 2;
        }
        return ans;
    }
};