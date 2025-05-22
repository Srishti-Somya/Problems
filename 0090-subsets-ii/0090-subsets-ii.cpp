class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, set<vector<int>>& st, int idx){
        if(idx >= nums.size()){
            sort(temp.begin(), temp.end());
            st.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(nums, temp, st, idx+1 );
        temp.pop_back();
        solve(nums, temp, st, idx+1 );
        
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>st;
        sort(nums.begin(), nums.end());
        solve(nums, temp, st, 0);
        vector<vector<int>>ans;
        for(auto it = st.begin(); it != st.end() ; it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};