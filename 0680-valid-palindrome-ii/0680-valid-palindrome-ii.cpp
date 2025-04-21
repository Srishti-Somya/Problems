class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
        }
        return true;
    }
    bool isPalindrome(string s, int i, int j){
        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    
    }
};
// class Solution {
// public:
//     bool validPalindrome(string s) {
//         int n = s.size();
//         int skip = 0;
//         if( n == 1 || n == 2) return true;
//         int st = 0;
//         int en = s.size() - 1;
//         while(st <= en){
//             if(s[st] != s[en]){
//                 if(skip != 0) return false;
//                 if(s[st+1] == s[en]) st++;
//                 else if (s[st] == s[en-1]) en--;
//                 else return false;
//                 skip = 1;
//                 continue;
//             }
//             st++;
//             en--;
//         }
//         return true;
//     }
// };