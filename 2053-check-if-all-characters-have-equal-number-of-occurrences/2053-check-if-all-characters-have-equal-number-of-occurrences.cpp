class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < s.size() ; i++ ) mp[s[i]]++;
        int count = mp.begin()->second;
        for(auto it = mp.begin() ; it != mp.end() ; it++ ){
            if(it->second != count) return false;
        }
        return true;
    }
};