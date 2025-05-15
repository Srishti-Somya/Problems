class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_len = INT_MAX;
        for(int i = 0 ; i < strs.size() ; i++ ) {
            if(strs[i].size() < min_len) min_len = strs[i].size();
        }
        string temp;
        while(min_len > 0){
            temp = strs[0].substr(0, min_len);
            int i;
            for(i = 1 ; i < strs.size() ; i++ ){
                if(strs[i].substr(0,min_len) != temp){
                    min_len--;
                    break;
                }
            }
            if(i == strs.size()) return temp;
        }
        return "";
    }
};