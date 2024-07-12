class Solution {
public:
    int maximumGain(string s, int x, int y) {
        char start;
        int score = 0;
        if(x > y)
        {
            // start = 'a';
        // }
        // else
        // {
        //     start = 'b';
        // }

        stack<char>st;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(s[i] == 'b' && !st.empty() && st.top() == 'a')
            {
                score += x;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        string temp = "";
        while(!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        for(int i = 0 ; i < temp.size() ; i++ )
        {
            if(temp[i] == 'a' && !st.empty() && st.top() == 'b')
            {
                score += y;
                st.pop();
            }
            else
            {
                st.push(temp[i]);
            }
        }
        return score;
        }
        else
        {
            stack<char>st;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(s[i] == 'a' && !st.empty() && st.top() == 'b')
            {
                score += y;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        string temp = "";
        while(!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        for(int i = 0 ; i < temp.size() ; i++ )
        {
            if(temp[i] == 'b' && !st.empty() && st.top() == 'a')
            {
                score += x;
                st.pop();
            }
            else
            {
                st.push(temp[i]);
            }
        }
        return score;
        }
        return score;
    }
};