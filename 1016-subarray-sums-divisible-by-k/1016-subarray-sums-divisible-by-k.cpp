class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_map< int, int> remainder_map;
        remainder_map[0] = 1;
        int sum = 0;
        int ans = 0;
        for( int i = 0 ; i < n ; i++ )
        {
            sum += nums[i];
            int rem = sum % k;
            if( rem < 0)
            {
                rem += k;
            }
            if( remainder_map.find(rem) != remainder_map.end())
            {
                ans += remainder_map[rem];
            }
            remainder_map[rem]++;
        }
        return ans;
    }
};