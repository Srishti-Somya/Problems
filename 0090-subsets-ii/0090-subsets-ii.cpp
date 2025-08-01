class Solution {
public:
    void getsubsets(vector<vector<int>> &ans, vector<int>& nums, vector<int>& temp, int idx){
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        getsubsets(ans, nums, temp , idx + 1);
        
        temp.pop_back();
        int next_idx = idx + 1;
        while(next_idx < nums.size() && nums[next_idx] == nums[idx]){
            next_idx++;
        }
        getsubsets(ans, nums, temp, next_idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        getsubsets(ans, nums, temp, 0);
        return ans;
    }
};