class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter = 0;
        string ans = "";
        for(int i = 0; i < s.size() ; i++ )
        {
            if(s[i] == '(')
            {
                if(counter != 0){
                    ans.push_back(s[i]);
                }
                counter++;
            }
            else
            {
                counter--;
                if(counter != 0)
                {
                    ans.push_back(s[i]);
                }
            }
        } 
        return ans;
        // stack<char>st;
        // int open = 0;
        // for(int i = 0; i < s.size() ; i++ )
        // {
        //     if(s[i] == '(')
        //     {
        //         if(open != 0)
        //         {
        //             st.push(s[i]);
        //         }
        //         open++;
        //     }else{
        //         open--;
        //         if(open != 0)
        //         {
        //             st.push(s[i]);
        //         }
        //     }
        // }
        // string temp = "";
        // while(!st.empty())
        // {
        //     temp.push_back(st.top());
        //     st.pop();
        // }
        // reverse(temp.begin(), temp.end());
        // return temp;
    }
};