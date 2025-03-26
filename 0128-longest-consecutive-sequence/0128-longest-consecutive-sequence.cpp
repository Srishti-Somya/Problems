class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int ans = 1;
        if(nums.size() == 0)
        {
            return 0;
        }
        for(int i = 1 ; i < nums.size() ; i++ )
        {
            if(nums[i] == nums[i-1] + 1)
            {
                count++;
                ans = max(count, ans);
            }
            else if(nums[i] == nums[i-1])
            {
                continue;
            }
            else
            {
                count = 1;
            }
        }
        return ans;
    }
};