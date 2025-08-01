class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>&nums, vector<int>&temp, set<int>& st){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(st.find(nums[i]) == st.end()){
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(ans, nums, temp, st);

                temp.pop_back();
                st.erase(nums[i]);
                // solve(ans, nums, temp, st);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        set<int>st;
        solve(ans, nums, temp, st);
        return ans;
    }
};