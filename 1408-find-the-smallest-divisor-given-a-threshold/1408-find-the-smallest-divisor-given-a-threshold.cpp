class Solution {
public:
    int findDivSum(vector<int>& nums, int divi){
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            sum += ceil(double(nums[i])/divi);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        // sort(nums.begin(), nums.end());
        int end = 0, st = 1, n = nums.size();
        for(int i = 0 ; i < nums.size() ; i++) end = max(end, nums[i]);
        // int ans = end;
        while(st <= end){
            int mid = st + (end-st)/2;
            int sum = findDivSum(nums, mid);
            // if(sum == threshold) return mid;
            if(sum > threshold) st = mid + 1;
            else {
                // ans = mid;
                end = mid - 1;
            }
        }
        return st;
    }
};