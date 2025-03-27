class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        // int curr = 0;
        for(int i = 0; i < nums.size() ; i++ )
        {
            if(nums[i] < 0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
            // else{
            //     nums[curr] = nums[i];
            //     curr += 2;
            // }
        }
        int grt = 1;
        int les = 0;
        for(int i = 0 ; i < neg.size() ; i++)
        {
            nums[grt] = neg[i];
            nums[les] = pos[i];
            grt += 2;
            les += 2;
        }
        return nums;
    }
};