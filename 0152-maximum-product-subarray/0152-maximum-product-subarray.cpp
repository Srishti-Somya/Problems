class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro = INT_MIN;
        int preprod = 1;
        for(int i = 0 ; i < nums.size() ; i++ ){
            preprod *= nums[i];
            maxpro = max(maxpro, preprod);
            if(preprod == 0) preprod = 1;
        }

        int sufprod = 1;
        for(int i = nums.size() - 1; i >= 0 ; i-- ){
            sufprod *= nums[i];
            maxpro = max(maxpro, sufprod);
            if(sufprod == 0) sufprod = 1;
        }

        return maxpro;
    }
};