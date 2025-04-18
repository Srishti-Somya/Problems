class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        int mid;
        while(st <= end){
            mid = st + (end - st)/2;
            if(nums[mid] > target){
                end = mid - 1;
            }
            else if(nums[mid] < target){
                st = mid + 1;
            }
            else{
                return mid;
            }
        }
        // if(mid == 0 ||mid == nums.size() - 1){
        //     if(nums[mid] > target){return mid;}
        // }
        // if(mid == nums.size() - 1){
        //     if(nums[mid] > target){return mid;}
        // }
        if(nums[mid] < target){
            return mid + 1;
        }
        return mid;
    }
};