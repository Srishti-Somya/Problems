class Solution {
public:
    int myAtoi(string s) {
        bool neg = false, lead = true;
        long num = 0;
        for(int i = 0; i < s.size() ; i++ ){
            if(s[i] == ' ' && lead == true){
                continue;
            }
            if(s[i] == '-' && lead == true){
                lead = false; neg = true; continue;
            } 
            if(s[i] == '+' && lead == true){
                lead = false; continue;
            } 
            if(s[i] != '0' && s[i] != '1' && s[i] != '2'&& s[i] != '3'&& s[i] != '4'&& s[i] != '5'&& s[i] != '6'&& s[i] != '7'&& s[i] != '8'&& s[i] != '9') break;
            lead = false;
            int rem = s[i] - '0';
            cout<<rem<< " " << num << " ";
            if(num*10 > INT_MAX || num*10 + rem > INT_MAX){
                if(neg == true) return INT_MIN;
                return INT_MAX;
            }

            num = num*10 + rem;
        }
        if(neg == true) return -num;
        return num;
    }
};