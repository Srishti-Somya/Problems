class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n1 = num1.size();
        int m1 = num2.size();
        int flag = 0;
        if(n1 < m1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        string temp = "";
        int carry = 0;
        int i = 0;
        int n = min(num1.size(),num2.size());
        for(i = 0; i < n; i++ )
        {
            int value = carry + (num1[i]-'0') + (num2[i]-'0');
            carry = value/10;
            value = value%10;
            temp.push_back('0'+value);
        }
        int m = max(num1.size() , num2.size());
        while(i < m)
        {
            if(flag == 1)
            {
                int value = carry + (num2[i]-'0');
                carry = value/10;
                value = value%10;
                temp.push_back('0'+value);
            }
            else
            {
                int value = carry + (num1[i]-'0');
                carry = value/10;
                value = value%10;
                temp.push_back('0'+value);
            }
            i++;
        }
        if(carry)
        {
            temp.push_back('0'+carry);
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};