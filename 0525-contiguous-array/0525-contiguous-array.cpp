class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int currSum = 0;
        int result = 0;
        mp[currSum] = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0){
                currSum -= 1;
            } else{
                currSum += 1;
            }
            if(mp.find(currSum)!= mp.end()){
                result = max(result, i - mp[currSum]);
            } else {
                mp[currSum] = i;
            }
        }
        return result;
    }
};