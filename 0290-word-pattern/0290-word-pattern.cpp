class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>mp;
        unordered_map<string, char>mp2;
        int j = 0;
        for(int i = 0 ; i < pattern.size() ; i++ ){
            string temp = "";
            if(j == s.size()) return false;
            for( ; j < s.size() ; j++ ){
                if(s[j] == ' ') {
                    j++;
                    break;
                }
                temp += s[j];
            }
            // cout<<temp << "-";
            if(mp.find(pattern[i]) != mp.end() || mp2.find(temp) != mp2.end()){
                if(mp[pattern[i]] != temp) return false; 
                if(mp2[temp] != pattern[i]) return false;
            }else{
                mp[pattern[i]] = temp;
                mp2[temp] = pattern[i];
            }
        }
        if(j != s.size()) return false;
        return true;
    }
};