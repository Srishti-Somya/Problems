class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int open = 0;
        for(int i = 0; i < s.size() ; i++ )
        {
            if(s[i] == '(')
            {
                if(open != 0)
                {
                    st.push(s[i]);
                }
                open++;
            }else{
                open--;
                if(open != 0)
                {
                    st.push(s[i]);
                }
            }
        }
        string temp = "";
        while(!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};