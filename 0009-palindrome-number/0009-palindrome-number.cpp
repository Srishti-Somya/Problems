class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long copy = x, reverse = 0;
        while(x){
            int rem = x%10;
            x = x/10;
            reverse = reverse*10 + rem;
        }
        return (reverse == copy) ? true : false;
    }
};