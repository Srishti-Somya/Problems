class Solution {
public:
    bool check(vector<int>& nums) {
        int dec = 0;
        int n = nums.size();
        for(int i = 0 ; i < n - 1; i++ )
        {
            if(nums[i] > nums[i+1])
            {
                dec++;
            }
        }
        if(nums[n - 1] > nums[0])
        {
            dec++;
        }
        if(dec > 1)
        {
            return false;
        }
        return true;
    }
};