class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<int>temp;
        for(int i = 0; i < n*n ; i++ ){
            temp.push_back(0);
        }
        for(int i = 0 ; i < grid.size() ; i++ )
        {
            for(int j = 0 ; j < grid[0].size() ; j++ )
            {
                temp[grid[i][j] - 1]++;
            }
        }
        vector<int>ans(2,0);
        for(int i = 0; i < temp.size() ; i++ )
        {
            if(temp[i] == 0)
            {
                ans[1] = i+1;
            }
            if(temp[i] == 2)
            {
                ans[0] = i+1;
            }
        }
        return ans;
    }
};