class Solution {
public:
    bool checkRecord(string s) {
        int ab = 0;
        int count = 1;
        if(s[0] == 'A')
        {
            ab++;
        }
        for( int i = 1; i < s.size() ; i++ )
        {
            if(s[i] == 'A')
            {
                ab++;
                if(ab >= 2)
                {
                    return false;
                }
            }
            if(s[i] == 'L')
            {
                if(s[i] == s[i-1])
                {
                    count++;
                    if(count == 3)
                    {
                        return false;
                    }
                }
                else
                {
                    count = 1;
                }
                
            }
        }
        return true;
    }
};