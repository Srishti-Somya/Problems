class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = i+2;
        int ans = 0;
        while(j < n){
            if((nums[i] + nums[j]) == float(nums[i+1])/2.0){
                ans++;
            }
            i++;
            j++;
        }
        return ans;
    }
};