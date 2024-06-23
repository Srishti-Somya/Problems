class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        vector<int> len;
        vector<int> base;
        
        for( int i = 0 ; i < grid.size() ; i++ )
        {
            // cout<<" i = "<< i <<" ";  
            for( int j = 0 ; j < grid[i].size() ; j++ )
            {
                if(grid[i][j] == 1)
                {
                    // cout<<i<<" "<<j<<" ";
                    len.push_back(i);
                    base.push_back(j);
                    // cout<< len <<" " << base<<" ";
                }
            }
        }
        int n = len.size();
        int m = base.size();
        sort(len.begin() , len.end() );
        sort(base.begin() , base.end() );
        int height = len[n-1] - len[0] + 1;
        int width = base[m-1] - base[0] + 1;
        
        return height*width;
    }
};