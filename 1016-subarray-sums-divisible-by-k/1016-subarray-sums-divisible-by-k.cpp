class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // approach 2
        // % baba ki jay!!
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = 1;
        int count = 0;
        for(int i = 0; i < nums.size() ; i++ )
        {
            sum += nums[i];
            if(sum < 0)
            {
                while(sum < 0)
                {
                    sum += k;
                }
            }
            if(mp.find(sum%k) != mp.end())
            {
                count += mp[sum%k];
            }
            mp[sum%k]++;
        }
        return count;

        // approach 1
        // int count = 0; 
        // for(int i = 0; i < nums.size() ; i++)
        // {
        //     int sum = 0;
        //     for(int j = i ; j < nums.size() ; j++ )
        //     {
        //         sum += nums[j];
        //         if(sum%k == 0)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};