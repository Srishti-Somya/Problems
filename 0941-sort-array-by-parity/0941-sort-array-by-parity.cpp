class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>arr;
        for(int i = 0; i < nums.size() ; i++)
        {
            if(nums[i]%2 == 0)
            {
                arr.push_back(nums[i]);
                nums[i] = -1;
            }
        }
        for(int i = 0; i < nums.size() ; i++ )
        {
            if(nums[i] != -1)
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};