class Solution {
public:
    void solve(vector<int>& candidates, vector<int>& temp, int target, int& sum, int idx, set<vector<int>>& ans){
        if(idx >= candidates.size() || sum > target){
            return;
        }
        sum += candidates[idx];
        temp.push_back(candidates[idx]);
        if(sum == target) ans.insert(temp);
        solve(candidates, temp, target, sum, idx + 1, ans);
        sum -= candidates[idx];
        temp.pop_back();
        if(sum == target) ans.insert(temp);
        solve(candidates, temp, target, sum, idx + 1, ans);
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>st;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        int sum = 0;
        solve(candidates, temp, target, sum, 0, st);
        vector<vector<int>>ans;
        for(auto it = st.begin(); it != st.end() ; it++ ){
            ans.push_back(*it);
        }
        return ans;
    }
};