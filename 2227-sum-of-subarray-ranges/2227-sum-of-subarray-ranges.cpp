//brute force use two loops and generate all subarrays
//and find the largest and smallest
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        long long ans = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            maxi = nums[i];
            mini = nums[i];
            for(int j = i + 1; j < nums.size() ; j++ ){
                maxi = max(maxi, nums[j]);
                mini = min(mini, nums[j]);
                ans += maxi - mini;
            }
        }
        return ans;
    }
};