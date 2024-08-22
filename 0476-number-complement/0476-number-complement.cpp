class Solution {
public:
    int findComplement(int num) {
        // int temp = num;
        // int count = 0;
        // while(temp!= 0)
        // {
        //     temp = temp>>1;
        //     count = count++;
        // }
        // temp = 0;
        // while(count != 0)
        // {
        //     temp = temp*10 + 1;
        // }
        // return (temp^num);

        if (num == 0) return 1;
        
        unsigned int mask = ~0;
        
        while (num & mask) {
            mask <<= 1;
        }
        
        return ~mask & ~num;
    }
};