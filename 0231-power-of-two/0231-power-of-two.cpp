class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0 || n < 0) return false;
        int set_bits = 0;
        while(n){
            if(n%2 == 1)set_bits++;
            if(set_bits > 1) return false;
            n = n>>1;
        }
        if(set_bits > 1) return false;
        return true;
    }
};