class Solution {
public:
    int minChanges(string s) {
        char curr = s[0];
        int count = 1;
        int change = 0;
        for(int i = 1 ; i < s.size() ; i++ )
        {
            if(s[i] == curr)
            {
                count++;
                continue;
            }

            if(count%2 == 0)
            {
                count = 1;
            }
            else
            {
                change++;
                count = 0;
            }
            curr = s[i];
        }
        return change;
    }
};