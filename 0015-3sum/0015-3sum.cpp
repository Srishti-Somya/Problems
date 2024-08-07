class Solution {
public:
    set<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>& temp, int idx, int n)
    {
        if( idx >= n)
        {
            if(temp.size() == 3)
            {
                int sum = 0;
                for( int i = 0; i < temp.size() ; i++ )
                {
                    sum += temp[i];
                }
                if( sum == 0)
                {
                    ans.insert(temp);
                }
            }
            return;
        }
        temp.push_back(nums[idx]);
        solve(nums,temp, idx + 1, n);
        temp.pop_back();
        solve(nums,temp, idx + 1, n);
        return;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // vector<int> temp;
        // solve(nums, temp, 0, n);
        // vector<vector<int>> arr;
        // for( auto a : ans)
        // {
        //     arr.push_back(a);
        // }
        // return arr;
        int target = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> arr;
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    ans.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : ans)
            arr.push_back(triplets);
        return arr;
    }
};