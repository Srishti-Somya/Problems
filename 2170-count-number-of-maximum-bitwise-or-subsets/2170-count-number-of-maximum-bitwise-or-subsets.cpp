class Solution {
public:
    void solve(int& max_or, int& count_max, vector<int>& nums, int idx, int curr_or ){
        if(idx >= nums.size()){
            if(curr_or > max_or){
                max_or = curr_or;
                count_max = 1;
            }else if(curr_or == max_or) count_max++;
            return;
        }
        int curr2 = curr_or|nums[idx];
        solve(max_or, count_max, nums, idx+1, curr2);
        solve(max_or, count_max, nums, idx+1, curr_or);
        return ;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int max_count = 0, max_or = 0;
        solve(max_or, max_count, nums, 0, 0);
        return max_count;
    }
};