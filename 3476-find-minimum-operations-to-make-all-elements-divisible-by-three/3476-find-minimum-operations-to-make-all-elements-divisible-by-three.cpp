class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        for( int i = 0; i < nums.size() ; i++ )
        {
            nums[i] = nums[i] % 3;
        }
        int ops = 0;
        for(int i = 0; i < nums.size() ; i++ )
        {
            ops += min(abs(0 - nums[i]), abs(3 - nums[i]));
        }
        return ops;
    }
};