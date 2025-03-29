class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        for( int i = 0; i < nums.size() ; i++ )
        {
            mp[nums[i]]++;
        }
        int n = nums.size() / 3; 
        vector<int>ans;
        for(auto it = mp.begin() ; it != mp.end() ; it++ )
        {
            if(it->second > n)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};