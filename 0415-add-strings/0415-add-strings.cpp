class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string res = "";
        int n = num1.size() - 1;
        int m = num2.size() - 1;
        while(n >= 0 && m >= 0){
            int rem1 = num1[n] - '0';
            int rem2 = num2[m] - '0';
            int sum = rem1 + rem2 + carry;
            carry = sum/10;
            sum = sum%10;
            res.push_back(sum +'0');
            n--;
            m--;
        }
        while(n>=0){
            int rem1 = num1[n] - '0';
            int sum = rem1 + carry;
            carry = sum/10;
            sum = sum%10;
            res.push_back(sum+'0');
            n--;
        }
        while(m>=0){
            int rem1 = num2[m] - '0';
            int sum = rem1 + carry;
            carry = sum/10;
            sum = sum%10;
            res.push_back(sum+'0');
            m--;
        }
        if(carry != 0) res.push_back(carry + '0');
        reverse(res.begin(), res.end());
        return res;
    }
};