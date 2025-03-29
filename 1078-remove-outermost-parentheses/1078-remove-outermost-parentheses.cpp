class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0;
        string ans = "";
        for( int i = 0; i < s.size() ; i++ )
        {
            if(open == 0 && s[i] == '(')
            {
                open++;
            }else if( s[i] == ')')
            {
                open--;
                if(open == 0){
                    continue;
                }else{
                    ans.push_back(s[i]);
                }   
            }
            else{
                open++;
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};