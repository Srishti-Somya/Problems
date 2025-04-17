class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() -1;
        while(st <= end)
        {
            if(nums[st] == target) return st; 
            if(nums[end] == target) return end;
            int mid = st + (end-st)/2;
            if(nums[mid] > target){
                if(nums[st] > target && nums[mid] > nums[st]) st = mid + 1;
                else end = mid - 1;
            }
            else if(nums[mid] < target){
                if(nums[end] > target || (nums[end] < nums[st] && nums[st] < nums[mid])) st = mid + 1;
                else end = mid - 1;
            }
            else{
                return mid;
            }
        }
        return -1;
        // int ans = -1;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] == target){
        //         return i;
        //     }
        // }
        // return -1;
    }
};