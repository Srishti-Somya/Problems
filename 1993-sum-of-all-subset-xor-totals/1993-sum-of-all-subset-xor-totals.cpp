class Solution {
public:
    void solve(vector<int>& nums, int idx, int &xori, int &sum){
        if(idx >= nums.size()){
            sum += xori;
            return;
        }
        int xori2 = xori^nums[idx];
        solve(nums, idx+1, xori2, sum);
        solve(nums, idx+1, xori, sum);
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0, xori = 0;
        solve(nums, 0, xori, sum);
        return sum;
    }
};