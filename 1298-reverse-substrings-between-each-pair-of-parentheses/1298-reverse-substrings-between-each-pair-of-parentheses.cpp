class Solution {
public:
    
    string reverseParentheses(string s) {
        stack<char> st;
        string t = "";
        for(int i = 0; i < s.size() ; i++ )
        {
            if(s[i] == ')')
            {
                // st.push(s[i]);
                string temp = "";
                while(st.top() != '(')
                {
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                if(st.empty() && i == s.size() - 1)
                {
                    return temp;
                }
                for(int i = 0; i < temp.size() ; i++ )
                {
                    st.push(temp[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        // return s;
        while(!st.empty())
        {
            t.push_back(st.top());
            st.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};