class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // using two pointer approach
        int i = 0;
        for(int j = 1 ; j < nums.size() ; j++ )
        {
            if(nums[j] != nums[i])
            {
                nums[i+1] = nums[j];
                i++; 
            }
        }
        return i+1;
    }
};