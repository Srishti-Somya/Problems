class Solution {
public:
    bool isValid(vector<int>& nums, int k, int mid){
        int student = 1, pages = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] > mid) return false;
            if(pages+nums[i] <= mid){
                pages += nums[i];
            }else{
                student++;
                pages = nums[i];
            }
        }
        if(student <= k) return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return -1;
        int sum = 0;
        for(int i = 0; i < n ; i++ ) sum += nums[i];
        int st = 0, end = sum, ans = sum;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(isValid(nums, k, mid)){
                ans = min(ans, mid);
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};