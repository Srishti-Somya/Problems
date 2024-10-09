class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int n = s.size();
        int i = 0;
        while(i < n)
        {
            if (st.empty()) {
                st.push(s[i]); // val = s[i]
            }
            else if(st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            i++;
        }
        return st.size();
        // int count = 0;
        // for(int i = 0; i < s.size(); i++)
        // {
        //     if(s[i] == '(')
        //     {
        //         count += 1;
        //         if(count < 0)
        //         {
        //             count += 2;
        //         }
        //     }
        //     else
        //     {
        //         count -= 1;
        //     }
        // }
        // return count;
    }
};