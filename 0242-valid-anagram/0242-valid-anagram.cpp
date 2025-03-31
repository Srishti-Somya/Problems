class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != t[i])
            {
                return false;
            }
        }
        return true;




        // unordered_map<char, int>mp;
        // for(int i = 0 ; i < s.size() ; i++ )
        // {
        //     mp[s[i]]++;
        // }
        // for(int i = 0 ; i < t.size() ; i++ )
        // {
        //     if(mp.find(t[i]) == mp.end())
        //     {
        //         return false;
        //     }
        //     else
        //     {
        //         mp[t[i]]--;
        //     }
        // }
        // for(auto itr = mp.begin() ; itr != mp.end() ; itr++)
        // {
        //     if(itr->second != 0)
        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};