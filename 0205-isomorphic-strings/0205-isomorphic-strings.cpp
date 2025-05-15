class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>mp;
        unordered_map<char, int>mp2;//storing the mapped charachters
        for(int i = 0 ; i < s.size() ; i++ ){
            if(mp.find(s[i]) != mp.end()){
                if(mp[s[i]] != t[i]) return false;
            }else{
                if(mp2.find(t[i]) == mp2.end())mp[s[i]] = t[i];//if not already mapped only then map 
                else return false;//otherwise if already mapped return false
                mp2[t[i]]++;
            }
        }
        return true;
    }
};