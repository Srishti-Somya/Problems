class Solution {
public:
    void solve(int start, int k, int n, vector<int>& temp, vector<vector<int>>& ans){
        if(temp.size() > k) return;
        if(n == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(start > 9) return;
        temp.push_back(start);
        solve(start+1, k, n - start, temp, ans);
        temp.pop_back();
        solve(start+1, k, n, temp, ans);
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int start = 1;
        vector<int>temp;
        vector<vector<int>>ans;
        solve(start, k, n, temp, ans);
        return ans;
    }
};