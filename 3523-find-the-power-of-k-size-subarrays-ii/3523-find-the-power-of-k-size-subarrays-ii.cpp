class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>result;
        long long sum_curr = 0;
        long long sum_upto_curr = 0;
        long long sum_ini = 0;
        int ini = 0;
        int temp = 0;
        for( int i = 0; i < k - 1 ; i++ )
        {
            sum_upto_curr += nums[i];
            temp++;
        }
        for( int i = temp; i < n ; i++ )
        {
            sum_upto_curr += nums[i];
            sum_curr = (static_cast<long long>(nums[i]) * (nums[i] + 1)) / 2;
            sum_ini = (static_cast<long long>(nums[ini] - 1) * nums[ini]) / 2;
            if(sum_upto_curr == (sum_curr - sum_ini))
            {
                result.push_back(nums[i]);
            }
            else
            {
                result.push_back(-1);
            }
            sum_upto_curr -= nums[ini];
            ini++;
        }
        return result;
    }
};