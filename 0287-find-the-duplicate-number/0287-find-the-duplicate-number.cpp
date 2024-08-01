class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        // for(int i = 1; i < nums.size(); i++)
        // {
        //     if(nums[i] == nums[i-1])
        //     {
        //         return nums[i];
        //     }
        // }
        // return -1;
        //we try to solve using floyds cycle detection
        // int slow = nums[0];
        // int fast = nums[0];
        // do{
        //     slow = nums[slow];
        //     fast = nums[nums[fast]];
        // } while(slow!=fast);

        // fast = nums[0];
        // while(slow!=fast){
        //     slow = nums[slow];
        //     fast = nums[fast];
        // }
        // return slow;
        // unordered_map<int , int> mp;
        // for(int i = 0; i < nums.size() ; i++ )
        // {
        //     mp[nums[i]]++;
        // }
        // for(auto a : mp)
        // {
        //     if(a.second >= 2)
        //     {
        //         return a.first;
        //     }
        // }
        // return -1;

        // tortoise and hare
        
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow != fast);
        slow = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};