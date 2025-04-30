class Solution {
public:
    int countDigit(int num){
        int count = 0;
        while(num){
            count++;
            num = num/10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size() ; i++ ){
            int count = countDigit(nums[i]);
            if(count % 2 == 0) ans++;
        }
        return ans;
    }
};