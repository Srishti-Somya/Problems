class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        int i = 0;
        stack<char>st;
        while(i < n)
        {
            // char ch = st.top();
            if (st.empty()) {
                st.push(s[i]); // val = s[i]
            }
            else if(st.top() == '[' && s[i] == ']')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            i++;
        }
        return ((st.size())/2 + 1)/2;
    }
};