class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi = 0;
        int maxi_ele = 0;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > maxi)
            {
                maxi = mp[nums[i]];
                maxi_ele = nums[i];
            }
        }
        return maxi_ele;
    }
};