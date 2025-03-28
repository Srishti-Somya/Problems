class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return 0;
        }
        int sum = 0;
        for(int i = 0; i < nums.size() ; i++ )
        {
            // sum += nums[i];
            int curr_sum = 0;
            for(int j = i+1 ; j < nums.size() ; j++ )
            {
                curr_sum += nums[j];
            }
            if(sum == curr_sum)
            {
                return i;
            }
            sum += nums[i];
        }
        return -1;
    }
};