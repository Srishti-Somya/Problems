class Solution {
public:
    bool isValid(vector<int>& nums, int k, int mid){
        int curr_sum = 0, curr_split = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(curr_sum + nums[i] <= mid) curr_sum += nums[i];
            else {
                curr_split++;
                curr_sum = nums[i];
            }
        }
        curr_split++;
        if(curr_split <= k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int st = 0, end = 0, res;
        for(int i = 0 ; i < nums.size() ; i++ ){
            end += nums[i];
            st = max(st, nums[i]);
        } 
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isValid(nums, k, mid)){
                res = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return res;
    }
};