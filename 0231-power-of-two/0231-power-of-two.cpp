class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int setbits = 0;
        while(n){
            if(n%2 != 0) setbits++;
            n = n/2;
        }
        if(setbits > 1) return false;
        return true;
    }
};