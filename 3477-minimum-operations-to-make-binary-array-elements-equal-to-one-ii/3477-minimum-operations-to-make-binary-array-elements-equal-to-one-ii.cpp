class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flip = 0;
        int count = 0;
        for( int i = 0; i < nums.size() ; i++ )
        {
            if(nums[i] == 0 && flip%2 == 0)
            {
                flip++;
            }
            if(nums[i] == 1 && flip%2 != 0)
            {
                flip++;
            }
            // if(flip % 2 == 0)
            // {
            //     flip++;
            //     curr = 1 - curr;
            // }
        }
        return flip;
        
        // int ops = 0;
        // for(int i = 0; i < nums.size() ; i++ )
        // {
        //     if(nums[i] == 0)
        //     {
        //         ops++;
        //         for( int j = i ; j < nums.size() ; j++ )
        //         {
        //             if(nums[j] == 0){
        //                 nums[j] = 1;
        //             }
        //             else
        //             {
        //                 nums[j] = 0;
        //             }
        //         }
        //     }
        // }
        // return ops;
    }
};