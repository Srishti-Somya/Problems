class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> temp(n);
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] < pivot){
                temp[j] = nums[i];
                j++;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] == pivot){
                temp[j] = nums[i];
                j++;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] > pivot){
                temp[j] = nums[i];
                j++;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++ ){
            // if(nums[i] < pivot){
                nums[i] = temp[i];
            //     j++;
            // }
        }
        return nums;
    }
};