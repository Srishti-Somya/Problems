class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, st = 0, end = 0, ans = INT_MAX;
        while(end < nums.size()){
            sum += nums[end];
            while(sum >= target){
                ans = min(ans, end - st + 1);
                sum -= nums[st];
                st++;
            }
            end++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};