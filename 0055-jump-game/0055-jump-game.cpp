class Solution {
public:
    // bool solve(vector<int>& nums, int n, int idx)
    // {
    //     if(idx == n-1)
    //     {
    //         return true;
    //     }
    //     if(idx >= n)
    //     {
    //         return false;
    //     }
    //     for(int i = 1 ; i < nums[idx] ; i++)
    //     {
    //         if(solve(nums, n, idx+i))
    //         {
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    bool canJump(vector<int>& nums) {
        // return solve(nums, nums.size(), 0);
        int maxIndx = 0;
        int n = nums.size();
        for( int i = 0 ; i < n ; i++)
        {
            if( i > maxIndx)
            {
                return false;
            }
            if(maxIndx >= n-1)
            {
                return true;
            }
            if(i + nums[i] > maxIndx)
            {
                maxIndx = i + nums[i];
            }
        }
        return false;
    }
};