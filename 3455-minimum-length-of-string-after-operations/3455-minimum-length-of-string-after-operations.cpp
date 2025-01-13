class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            mp[s[i]]++;
            if(mp[s[i]] == 3)
            {
                n -= 2;
                mp[s[i]] = 1;
            }
        }
        return n;
    }
};