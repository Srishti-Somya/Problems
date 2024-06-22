class Solution {
public:
    int minOperations(vector<int>& nums) {
        // int zeros = 0;
        // for( int i = 0; i < nums.size() ; i++ )
        // {
        //     if(nums[i] == 0)
        //     {
        //         zeros++;
        //     }
        // }
        // if(zeros % 3 != 0)
        // {
        //     return -1;
        // }
        // return zeros;
        int n = nums.size();
        int ops = 0;
        int i;
        for( i = 0 ; i < nums.size() ; i++ )
        {
            
            if(nums[i] == 0)
            {
                if(i + 2 == n || i + 1 == n)
                {
                    break;
                }
                else
                {
                    ops++;
                    if(nums[i + 1] == 0){
                        nums[i + 1] = 1;
                    }
                    else{
                        nums[i + 1] = 0;
                    }
                    if(nums[i + 2] == 0){
                        nums[i + 2] = 1;
                    }
                    else{
                        nums[i + 2] = 0;
                    }
                }
            }
            
        }
        if(i != n)
        {
            return -1;
        }
        return ops;
    }
};