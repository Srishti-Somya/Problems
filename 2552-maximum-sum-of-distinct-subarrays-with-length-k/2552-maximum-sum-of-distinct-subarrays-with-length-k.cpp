class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        long long currSum = 0;
        unordered_map<int, int> mp;
        int i = 0;

        for (int j = 0; j < nums.size(); ++j) {
            mp[nums[j]]++;
            currSum += nums[j];
            while (j - i + 1 > k || mp[nums[j]] > 1) {
                mp[nums[i]]--;
                currSum -= nums[i];
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
            if (j - i + 1 == k && mp.size() == k) {
                ans = max(ans, currSum);
            }
        }

        return ans;
        // return 0;
        // long long ans = 0;
        // long long currSum = 0;
        // int i = 0, j = i;
        // unordered_map<int, int>mp;
        // int start,st = 0;
        // while(j < nums.size()){
        //     if(mp.find(nums[j]) != mp.end()){
        //         start = mp[nums[j]];
        //         while(st <= start){
        //             if(mp.find(nums[st]) != mp.end()){
        //                 currSum -= nums[st];
        //                 mp.erase(nums[st]);
        //             } 
        //             st++;
        //         }
        //     }
        //     mp[nums[j]] = j;
        //     currSum += nums[j];
        //     if(mp.size() == k){
        //         ans = max(currSum, ans);
        //         currSum -= nums[i];
        //         mp.erase(nums[i]);
        //         i++;
        //         // continue;
        //     }
        //     j++;
        // }
        // return ans;
    }
};