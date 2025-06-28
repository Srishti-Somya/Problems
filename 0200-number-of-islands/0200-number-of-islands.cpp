class Solution {
public:
    void bfs(int row, int col,vector<vector<char>>& grid, vector<vector<int>>& vis){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        queue<pair<int, int>>q;
        q.push({row, col});
        while(!q.empty()){
            int rw = q.front().first;
            int cl = q.front().second;
            q.pop();

            int top = rw -1, bottom = rw + 1;
            int left = cl -1, right = cl + 1;
            if(top >= 0 && vis[top][cl] != 1 && grid[top][cl] == '1'){
                vis[top][cl] = 1;
                q.push({top, cl});
            }
            if(bottom < n && vis[bottom][cl] != 1 && grid[bottom][cl] == '1'){
                vis[bottom][cl] = 1;
                q.push({bottom, cl});
            }
            if(left >= 0 && vis[rw][left] != 1 && grid[rw][left] == '1'){
                vis[rw][left] = 1;
                q.push({rw, left});
            }
            if(right < m && vis[rw][right] != 1 && grid[rw][right] == '1'){
                vis[rw][right] = 1;
                q.push({rw, right});
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m,0));
        int count = 0;
        for(int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                if(grid[i][j] == '1' && vis[i][j] != 1){
                    bfs(i, j, grid, vis);
                    count++;
                }
            }
        }
        return count;
    }
};