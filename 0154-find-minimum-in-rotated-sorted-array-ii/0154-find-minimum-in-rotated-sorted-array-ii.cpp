class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, mid;
        int end = nums.size() - 1;
        int mini = min(nums[st], nums[end]);
        while(st <= end){
            mid = st + (end - st)/2;
            if(nums[mid] < mini) mini = nums[mid];
            if(nums[st] == nums[mid] && nums[mid] == nums[end]){
                st++;
                end--;
                continue;
            }
            if(nums[mid] <= nums[end]){
                mini = min(nums[mid], mini);
                end = mid - 1;
            }
            else{
                mini = min(nums[st], mini);
                st = mid + 1;
            }
        }
        return mini;
    }
};