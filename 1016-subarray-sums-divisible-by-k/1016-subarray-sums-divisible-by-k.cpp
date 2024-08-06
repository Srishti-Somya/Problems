class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;
        int ans = 0;
        int sum = 0;
        unordered_map< int, int > remainder_map;
        remainder_map[0] = 1;
        for( int i = 0 ; i < n ; i++)
        {
            sum += nums[i];
            int remainder;
            if( sum >= 0)
            {
                remainder = sum % k;
            }
            else
            {
                remainder = (sum+ k);
                while( remainder <= 0){
                    remainder += k;
                }
                remainder = remainder% k;
            }
            
            
                if( remainder_map.find(remainder) != remainder_map.end())
                {
                    ans += remainder_map[remainder];
                    remainder_map[remainder]++;
                }
                else
                {
                    remainder_map[remainder] = 1;
                }
            
            
        }
        // for( int i = 0 ; i < n ; i++ )
        // {
        //     sum = 0;
        //     for( int j = i ; j < n ; j++ )
        //     {
        //         sum += nums[j];
        //         if(sum % k == 0)
        //         {
        //             ans++;
        //         }
        //     }
        // }
        // while( i <= j)
        // {
        //     sum += nums[j];
        //     if(sum % k == 0)
        //     {
        //         ans++;   
        //     }
        //     else
        //     {
        //         sum -= nums[i];
        //         i++;
        //     }
        //     if(j < n - 1)
        //     { 
        //        j++;
        //     }
        // }
        return ans;
    }
};