class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if(s.size() == 1) return 0;
        int maxi, mini;
        string maximum, minimum;
        if(x > y){
            maxi = x;
            mini = y;
            maximum = "ab";
            minimum = "ba";
        }else{
            maxi = y;
            mini = x;
            maximum = "ba";
            minimum = "ab";
        }

        stack<char>st;
        int res = 0;
        st.push(s[0]);
        int i = 1;

        if(maximum == "ba"){
            while(i < s.size()){
                if(st.empty()) {st.push(s[i]); continue;}
                if(s[i] == 'a' && st.top() == 'b'){
                    res += maxi;
                    st.pop();
                    i++;
                    continue;
                }
                st.push(s[i]);
                i++;
            }
            int j = 1;
            string temp = "";
            while(!st.empty()){
                temp.push_back(st.top());
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            if(temp.size() != 0 )st.push(temp[0]);
            while(j < temp.size()){
                if(st.empty()) {st.push(temp[j]); continue;}
                if(temp[j] == 'b' && st.top() == 'a'){
                    res += mini;
                    st.pop();
                    j++;
                    continue;
                }
                st.push(temp[j]);
                j++;
            }
        }else{

            while(i < s.size()){
                if(st.empty()) {st.push(s[i]); continue;}
                if(s[i] == 'b' && st.top() == 'a'){
                    res += maxi;
                    st.pop();
                    i++;
                    continue;
                }
                st.push(s[i]);
                i++;
            }
            int j = 1;
            string temp = "";
            while(!st.empty()){
                temp.push_back(st.top());
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            if(temp.size() != 0 )st.push(temp[0]);
            while(j < temp.size()){
                if(st.empty()) {st.push(temp[j]); continue;}
                if(temp[j] == 'a' && st.top() == 'b'){
                    res += mini;
                    st.pop();
                    j++;
                    continue;
                }
                st.push(temp[j]);
                j++;
            }
        }
        return res;

        // int res = 0;
        // while(s.find(maximum) != string::npos || s.find(minimum) != string::npos){
        //     if(s.find(maximum) != string::npos){
        //         size_t pos = s.find(maximum);
        //         s.replace(pos, 2, "");
        //         res += maxi;
        //         continue;
        //     }
        //     if(s.find(minimum) != string::npos){
        //         size_t pos = s.find(minimum);
        //         s.replace(pos, 2, "");
        //         res += mini;
        //     }
        // }
        // return res;
    }
};