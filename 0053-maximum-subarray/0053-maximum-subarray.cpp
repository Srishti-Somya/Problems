class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int i = 0, j = 0;
        int n = nums.size();
        int maxi = nums[0];
        while(i < n)
        {
            sum += nums[i];
            i++;
            maxi = max(maxi, sum);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};