class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int maxi = nums[0];
        
        int i = 0; 
        int n = nums.size();
        int j = 0;
        while(i < n)
        {
            curr += nums[i];
            maxi = max(curr, maxi);
            if(curr < 0)
            {
                curr = 0;
            }
            i++;
        }
        return maxi;
    }
};