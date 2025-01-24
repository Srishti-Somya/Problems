class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int element = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++ )
        {
            if(count == 0)
            {
                element = nums[i];
                count++;
            }
            else
            {
                if(element == nums[i])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return element;
    }
};