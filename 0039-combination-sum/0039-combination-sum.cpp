class Solution {
public:
    void solve(vector<int>& candidates, int target, int idx, vector<int>& temp, set<vector<int>>& ans){
        if(target < 0) return;
        if(target == 0 ){
            ans.insert(temp);
            return;
        }
        if(idx == candidates.size()){
            return;
        }
        temp.push_back(candidates[idx]);
        solve(candidates, target - candidates[idx], idx+1, temp, ans);
        solve(candidates, target - candidates[idx], idx, temp, ans);
        temp.pop_back();
        solve(candidates, target, idx+1, temp, ans);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>>ans;
        vector<int>temp;
        solve(candidates, target, 0, temp, ans);
        vector<vector<int>>res(ans.begin(), ans.end());
        return res;
    }
};