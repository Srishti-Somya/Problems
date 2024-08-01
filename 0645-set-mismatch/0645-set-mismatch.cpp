class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = (n * (n + 1))/ 2;
        int sum2 = 0;
        vector<int> ans;
        for(int i =  0 ; i < nums.size() - 1 ; i++ )
        {
            sum2 += nums[i];
            if(nums[i] == nums[i+1])
            {
                ans.push_back(nums[i]);
                sum2 -= nums[i];
            }
        }
        sum2 += nums[n - 1];
        ans.push_back(sum - sum2);
        return ans;
    } 
};