class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int j;
        for(j = num.size()-1; j >= 0 ; j--){
            int last = num[j] - '0';
            if(last % 2 == 0) continue;
            else break;
        }
        return num.substr(0,j+1);
    }
};