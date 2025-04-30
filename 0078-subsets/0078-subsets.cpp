class Solution {
public:
    void solve(vector<int>& nums, int i , vector<int>& temp)
    {   
        if(i >= nums.size())
        {
            // for(int j = 0 ; j < temp.size() ; j++ ){
            //     cout<<temp[j]<<" ";
            // }
            cout<<endl;
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);//take ith element and explore
        solve(nums, i+1 , temp);
        temp.pop_back();
        solve(nums, i+1 , temp);
        return;
    }
    
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>temp;
        solve(nums,0,temp);   
        return ans;
    }
};