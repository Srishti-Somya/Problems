class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        int i = 0;
        int j = i;
        int n = nums.size();
        long long pairs = 0;
        unordered_map<int, int>mp;
        while(j < n)
        {
            if(mp.find(nums[j]) != mp.end()){
                pairs += mp[nums[j]];
            }
            mp[nums[j]]++;
            while(pairs >= k)
            {
                ans += (n-j);
                mp[nums[i]]--;
                pairs -= mp[nums[i]];
                i++;
            }
            j++;
        }
        // while(i < n)
        // {
        //     if(pairs >= k){
        //         ans++;
        //     }
        //     i++;
        //     mp[nums[i]]--;
        //     pairs -= mp[nums[i]];
        // }
        return ans;
    }
};