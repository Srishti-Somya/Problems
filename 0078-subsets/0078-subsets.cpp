class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& temp, vector<int>& nums, int idx){
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(ans, temp, nums, idx+1);
        temp.pop_back();
        solve(ans, temp, nums, idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans, temp, nums, 0);
        return ans;
    }
};