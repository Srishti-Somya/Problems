class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        // vector<int>prefix_sum;
        long long leftsum = 0,rightsum = 0, sum = 0;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            sum += nums[i];
            // prefix_sum.push_back(curr);
        }
        int count = 0;
        int n = nums.size();
        for(int i = 0 ; i < nums.size() - 1; i++ )
        {
            leftsum += nums[i];
            rightsum = sum - leftsum;
            if(leftsum >= rightsum )
            {
                count++;
            }
        }
        return count;
    }
};