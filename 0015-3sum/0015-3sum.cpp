class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>st;
        for(int i = 0 ; i < nums.size() ; i++ ){
            unordered_map<int, int>mp;
            for(int j = i+1 ; j < nums.size() ; j++ ){
                int num = -(nums[i]+nums[j]);
                if(mp.find(num) != mp.end()){
                    vector<int>temp = {nums[i], nums[j], num};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                mp[nums[j]]++;
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};