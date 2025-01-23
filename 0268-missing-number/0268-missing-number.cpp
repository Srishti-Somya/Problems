class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size();
        sum = (sum*(sum+1))/2;
        int curr_sum = 0;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            curr_sum += nums[i];
        }
        return sum-curr_sum;
    }
};