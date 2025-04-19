class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0; 
        int end = nums.size() - 1;
        vector<int>ans(2,-1);
        int first = end + 1, second = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] >= target){
                first = min(first, mid);
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        st = 0, end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] <= target){
                second = max(second,mid);
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        if(first == end+1){
            return {-1,-1};
        }
        return {first, second};
    }
};