class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0;
        string res = "";
        for(int i = 0 ; i < s.size() ; i++ ){
            if(s[i] == '('){
                if(open != 0) res += s[i];
                open++;
            }
            else{
                open--;
                if(open != 0) res += s[i];
            }
            
        }
        return res;
    }
};