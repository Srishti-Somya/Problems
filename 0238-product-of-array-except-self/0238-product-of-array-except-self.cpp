class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n = nums.size();
        // vector<int>ans(n,1);
        // // vector<int>prefix(n,1);
        // // vector<int>suffix(n,1);
        // for( int i = 1 ; i < n ; i++ ){
        //     // prefix[i] = prefix[i-1]*nums[i-1];
        //     ans[i] = ans[i-1]*nums[i-1];
        // }
        // int suffix = nums[n-1];
        // for( int j = n-2 ; j >= 0 ; j-- ){
        //     // suffix[j] = suffix[j+1]*nums[j+1];
        //     ans[j] = ans[j]*suffix;
        //     suffix = suffix*nums[j];
        // }
        // // for( int i = 0 ; i < n ; i++ ){
        // //     ans[i] = prefix[i]*suffix[i];
        // // }
        // return ans;

        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int>suffix(n, 1);
        vector<int>ans(n);
        for(int i = 1; i < n ; i++ ){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int j = n-2; j >= 0 ; j-- ){
            suffix[j] = suffix[j+1]*nums[j+1];
        }
        for(int i = 0 ; i < n ; i++ ){
            ans[i] = prefix[i]*suffix[i];
        }
        return ans;
    }
};