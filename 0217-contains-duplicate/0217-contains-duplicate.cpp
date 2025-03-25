class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 1)
        {
            return false;
        }
        for(int i = 1; i < nums.size() ; i++ )
        {
            if(nums[i] == nums[i-1])
            {
                return true;
            }
        }
        return false;
        // int xor_n = 0;
        // if(nums[0] != 0)
        // {
        //     xor_n = xor_n^nums[0];
        // }
        // for(int i = 1; i < nums.size() ; i++ )
        // {
        //     xor_n = xor_n^nums[i];
        //     if(xor_n == 0)
        //     {
        //         return true;
        //     }
        // }
        // return false;
    }
};