class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int i, j, n, m, ans=0;
        if(nums.size()<=1)
        {
            return ans;
        }
        sort(nums.begin(), nums.end());
        n = nums[0]+k;
        m = nums[nums.size()-1] - k;
        if(n<=m)
        {
            ans = m - n;
        }
        else
        {
            ans = 0;
        }
        return ans;
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // if(n <= 1)
        // {
        //     return 0;
        // }
        // int biggest = nums[n-1] - k;
        // int second_big = nums[n-2] + k;
        // // if(biggest > second_big)
        // // {
        // //     return biggest - second_big;
        // // }
        // return abs(biggest - second_big);
    }
};