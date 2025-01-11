class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k)
        {
            return false;
        }
        unordered_map<char, int>mp;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            mp[s[i]]++;
        }
        int odd = 0;
        for(auto itr = mp.begin() ; itr != mp.end() ; itr++)
        {
            if(itr->second%2 != 0)
            {
                odd++;
            }
        }
        if(odd <= k)
        {
            return true;
        }
        return false;
    }
};