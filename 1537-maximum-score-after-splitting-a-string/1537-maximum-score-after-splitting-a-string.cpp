class Solution {
public:
    int maxScore(string s) {
        int maxi = INT_MIN;
        int zero = 0;
        int ones = 0;
        int score;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(s[i] == '1')
            {
                ones++;
            }
        }
        for(int i = 0 ; i < s.size() - 1; i++ )
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                ones--;
            }
            score = zero + ones;
            maxi = max(maxi, score);
        }
        return maxi;
    }
};