class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int xori;
        xori = nums[0];
        for(int i = 1 ; i < nums.size() ; i++ )
        {
            xori = nums[i] ^ nums[i-1];
            if(xori == 0)
            {
                return nums[i];
            }
        }
        return -1;
    }
};