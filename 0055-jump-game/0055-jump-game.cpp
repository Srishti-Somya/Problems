class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReachableIndex = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(i > maxReachableIndex) return false;
            if(i <= maxReachableIndex && nums[i]+i >= maxReachableIndex){
                maxReachableIndex = nums[i]+i;
            }
        }
        // if(maxReachableIndex+1 >= nums.size()) return true;
        return true;
    }
};