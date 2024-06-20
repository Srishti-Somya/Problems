class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int, int>mp;
        // for(int i = 0; i < nums.size() ; i++ )
        // {
        //     mp[nums[i]]++;
        // }
        // for(auto a : mp)
        // {
        //     if(a.second == 1)
        //     {
        //         return a.first;
        //     }
        // }
        // return -1;
        int low = 0;
        int high = nums.size() - 2;
        while( low <= high )
        {
            int mid = low + (high - low)/2;
            if(nums[mid] == nums[mid^1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return nums[low];
    }
};