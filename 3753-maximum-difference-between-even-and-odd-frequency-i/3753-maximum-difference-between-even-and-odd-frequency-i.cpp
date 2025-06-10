class Solution {
public:
    int maxDifference(string s) {
        int even_min = 100;
        int odd_max = 0;
        unordered_map<char, int>mp;
        for(int i = 0 ; i < s.size() ; i++ ){
            mp[s[i]]++;
        }
        for(auto it : mp){
            if(it.second%2 == 0 && it.second < even_min) even_min = it.second;
            if(it.second%2 != 0 && it.second > odd_max) odd_max = it.second;
        }
        return odd_max - even_min;
    }
};