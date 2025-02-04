class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int rem;
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size() ; i++ )
        {
            rem = target - nums[i];
            if(mp.find(rem)!= mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[rem]);
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};