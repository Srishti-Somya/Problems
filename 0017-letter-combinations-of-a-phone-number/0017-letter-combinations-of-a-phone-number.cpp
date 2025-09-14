class Solution {
public:
    void solve(string &digits, int idx, unordered_map<char,string>&mp,vector<string>&ans, string &temp){
        if(digits.size() == 0) return;
        if(idx == digits.size()){
            ans.push_back(temp);
            return;
        }
        string value = mp[digits[idx]];
        for(int i = 0 ; i < value.size() ; i++){
            temp.push_back(value[i]);
            solve(digits, idx+1, mp, ans, temp);
            temp.pop_back();
        }
        // return;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string>mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string>ans;
        string temp = "";
        solve(digits, 0, mp, ans, temp);
        return ans;
    }
};