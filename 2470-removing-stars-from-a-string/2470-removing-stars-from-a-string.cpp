class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i = 0 ; i < s.size() ; i++ ){
            if(s[i] == '*'){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};