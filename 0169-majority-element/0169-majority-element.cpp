class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maxi = nums[0];
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(count == 0){
                maxi = nums[i];
            }
            if(nums[i] == maxi){
                count++;
            }else{
                count--;
            }
        }
        return maxi;
    }
};