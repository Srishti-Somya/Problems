class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res = 0;
        int ans = 0; 
        // map<int, int, greater<int> > mp;
        // for( int i = 0; i < nums.size() ; i++ )
        // {
        //     mp[nums[i]]++;
        // }
        int maxVal = 0;
        int result = 0;
        int streak = 0;

        for (int num : nums) {
            if (num > maxVal) {
                maxVal = num;
                result = 0;
                streak = 0;
            }

            if (maxVal == num) {
                streak++;
            } else {
                streak = 0;
            }

            result = max(result, streak);
        }
        // return 

        return result;
        // for( int i = 0; i < nums.size() ; i++ )
        // {
        //     int temp = nums[i];
        //     if(temp > res)
        //     {
        //         int count = 1;
        //         for( int j = i+1; j < nums.size() ; j++ )
        //         {
        //             if(nums[j] == temp)
        //             {
        //                 count++;
        //             }
        //             else
        //             {
        //                 break;
        //             }
        //             // temp = nums[j] & temp;
        //             // if(temp > res)
        //             // {
        //             //     ans = (j - i + 1);
        //             //     res = temp;
        //             // }
        //         }
        //         ans = count;
        //         res = temp;
        //     }
        // }
        // return ans;
    }
};