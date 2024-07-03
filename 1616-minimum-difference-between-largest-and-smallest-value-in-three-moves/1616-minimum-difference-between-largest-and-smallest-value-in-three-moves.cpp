class Solution {
public:
    int minDifference(vector<int>& nums) {
        int result = INT_MAX;
        if(nums.size() <= 4)
        {
            return 0;
        }
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int mini = nums[0];
        int maxi = nums[n];
        
        // case 1
        result = min(result, nums[n] - nums[3]);
        // case 2
        result = min(result, nums[n - 1] - nums[2]);
        // case 3
        result = min(result, nums[n - 2] - nums[1]);
        // case 4
        result = min(result, nums[n-3] - nums[0]);

        return result;
    }
};