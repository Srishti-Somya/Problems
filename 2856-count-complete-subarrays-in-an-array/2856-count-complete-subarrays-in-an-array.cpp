class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size() ; i++ ){
            mp[nums[i]]++;
        }
        int n = mp.size();
        int ans = 0;
        unordered_map<int, int>mp1;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            mp1[nums[j]]++;
            while (mp1.size() == n) {
                ans += (nums.size() - j);  
                mp1[nums[i]]--;
                if (mp1[nums[i]] == 0) mp1.erase(nums[i]);
                i++;
            }
        }
        return ans;
    }
};