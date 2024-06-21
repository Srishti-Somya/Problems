class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>remove;
        int distinct = 0;
        for(int i = 0; i < nums.size();i++)
        {
            if(mp.find(nums[i])!= mp.end())
            {
                remove.push_back(i);
                continue;
            } 
            else
            {
                mp[nums[i]]++;
                distinct++;
            }
            // }
            // if(nums[i-1] != nums[i])
            // {
            //     distinct++;
            // }
        }
        for(int i = 0 ; i < remove.size() ; i++ )
        {
            nums.erase(nums.begin() + remove[i] - i);
        }
        // cout<<distinct;
        return distinct;
        
        
        // int n = nums.size();
        
        // int distinct = 0;
        // for( int i = 0; i < nums.size() ; i++ )
        // {
        //     if(nums[i] == nums[i + 1])
        //     {
        //         int curr_last = nums.size() - 1;
        //         swap(nums[i] , nums[curr_last]);
        //         nums.pop_back();
        //         sort(nums.begin(), nums.end());
        //     }
        //     else
        //     {
        //         distinct++;
        //     }
        // }
        // return distinct;
    }

};