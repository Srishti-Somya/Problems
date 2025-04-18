class Solution {
public:
    void solve(int n, string &ans){
        if(n == 1){return;}
        int i = 0;
        string temp = "";
        while (i < ans.size()) {
            char currentChar = ans[i];
            int count = 1;
            while (i + 1 < ans.size() && ans[i + 1] == currentChar) {
                count++;
                i++;
            }
            temp += to_string(count) + currentChar;
            i++;
        }
        ans = temp;
        solve(n - 1, ans);
    }
    string countAndSay(int n) {
        if(n == 1){return "1";}
        string ans = "1";
        solve(n, ans);
        return ans;
    }
};