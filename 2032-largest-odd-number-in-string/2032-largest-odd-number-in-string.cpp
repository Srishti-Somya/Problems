class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int temp = 0;
        for(int i = num.size() - 1; i >=  0 ; i--)
        {
            int curr = num[i] - '0';
            if(curr % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }
        // if(temp == 0)
        // {
        //     return ans;
        // }
        // ans.push_back('0' + temp);
        return ans;
    }
};