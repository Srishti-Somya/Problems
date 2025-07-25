class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        map<int, int, greater<int>>mp;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
                if(nums[i] >= 0)sum += nums[i];
            }
        }
        if(sum == 0){
            sum += mp.begin()->first;
        }
        return sum;
    }
};