class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        map<int, int>mp;
        int start = 0;
        int i = 0;
        while(i < nums.size())
        {
            // int flag = 0;
            // for( int i = start ; i < nums.size() ;i++ )
            // {
                if(mp.find(nums[i]) != mp.end())
                {
                    mp.clear();
                    start += 3;
                    count++;
                    i = start;
                }
                
            
            if(i >= nums.size())
            {
                // count++;
                break;
            }
            mp[nums[i]]++;
                
            i++;
        }
        return count;
    }
};