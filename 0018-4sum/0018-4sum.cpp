class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() ; i++ ){
            for(int j = i + 1 ; j < nums.size() ; j++ ){
                set<long long>mp;
                for(int k = j+1 ; k < nums.size() ; k++ ){
                    long long left_sum = nums[i];
                    left_sum += nums[j];
                    left_sum += nums[k];
                    left_sum = target - left_sum;
                    if(mp.find(left_sum) != mp.end()){
                       vector<int> temp = {nums[i], nums[j], nums[k], (int)left_sum};
                    //    sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    mp.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
        
    }
};