class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n == 1)
        {
            return nums;
        }
        if( n == 2)
        {
            if(nums[0] == nums[1])
            {
                return {nums[0]};
            }
            return nums;
        }
        int freq = 1;
        int el = nums[0];
        vector<int> ans;
        for(int i = 1 ; i < n ; i++ )
        {
            if(nums[i] == el)
            {
                freq++;
            }
            else
            {
                if(freq > n/3)
                {
                    ans.push_back(el);
                }
                freq = 1;
                el = nums[i];
            }
        }
        if(freq > n/3)
        {
            ans.push_back(el);
        }
        return ans;
    }
};