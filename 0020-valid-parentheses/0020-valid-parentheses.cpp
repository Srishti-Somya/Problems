class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n = s.size();
        int i = 0;
        while(i < n)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else if(st.top() == '[' && s[i] == ']')
            {
                st.pop();
            }
            else if(st.top() == '{' && s[i] == '}')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            i++;
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};