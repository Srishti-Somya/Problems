class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int en = s.size() - 1;
        while(st <= en){
            char start = tolower(s[st]);
            char end = tolower(s[en]);
            if(!((start >= 'a' && start <= 'z' )|| (start >= '0' && start <= '9'))){
                st++;continue;
            }if(!((end >= 'a' && end <= 'z')||(end >= '0' && end <= '9'))){
                en--; continue;
            }
            if(!(start == end)){
                return false;
            }
            st++;
            en--;
        }
        return true;
    }
};