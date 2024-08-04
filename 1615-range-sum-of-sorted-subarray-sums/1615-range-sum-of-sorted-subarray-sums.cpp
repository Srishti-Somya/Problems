class Solution {

public:
    const int MOD = 1000000007;
    vector<int> newarr;
    // void solve(vector<int>& nums,vector<int>& temp, int &n, int idx )
    // {
    //     if(idx >= n)
    //     {
    //         int sum = 0;
    //         for( int i = 0; i < temp.size() ; i++ )
    //         {
    //             sum += temp[i];
    //         }
    //         newarr.push_back(sum);
    //         return;
    //     }
    //     temp.push_back(nums[idx]);
    //     solve(nums, temp, n, idx + 1);
    //     temp.pop_back();
    //     solve(nums, temp, n, idx + 1);
    //     return;
    // }
    void solve(vector<int>& nums, int n) {
        for (int i = 0; i < n; ++i) {
            int currentSum = 0;
            for (int j = i; j < n; ++j) {
                currentSum += nums[j];
                newarr.push_back(currentSum);
            }
        }
    }
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        solve(nums, n);
        sort(newarr.begin(), newarr.end());
        int ans = 0;
        for (int i = left - 1; i <= right - 1; ++i) {
            ans = (ans + newarr[i])% MOD;
        }
        return ans ;
    }
};