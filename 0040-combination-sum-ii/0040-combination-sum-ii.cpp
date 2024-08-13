class Solution {
public:
    void solve(vector<int> &candidates, int target, int index, vector<int> &temp, vector<vector<int>> &result)
    {
        if (target < 0) {
            return;
        }
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        for (int j = index; j < candidates.size(); j++) {
            if (j > index && candidates[j] == candidates[j - 1]) {
                continue;  // Skip duplicates
            }
            if (candidates[j] > target) {
                break;  // No need to continue if the candidate exceeds the target
            }
            temp.push_back(candidates[j]);
            solve(candidates, target - candidates[j], j + 1, temp, result);
            temp.pop_back();  // Backtrack
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> temp;
        solve(candidates, target, 0, temp, result);
        return result;
    }
};