class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // using two pointer with swap
        int i = 0;
        while(i < nums.size() && nums[i] != 0)
        {
            i++;
        }
        for(int j = i+1 ; j < nums.size() ; j++ )
        {
            if(nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }

        // int curr = 0;
        // for(int i = 0; i < nums.size() ; i++ )
        // {
        //     if(nums[i] != 0)
        //     {
        //         nums[curr] = nums[i];
        //         curr++;
        //     }
        // }
        // for(int i = curr ; i < nums.size() ; i++ )
        // {
        //     nums[i] = 0;
        // }
    }
};