class Solution {
public:
    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int &sr, int &sc, int &area){
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>>q;
        vis[sr][sc] = 1;
        q.push({sr, sc});
        area++;
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            int top = row - 1, bottom = row + 1, left = col - 1, right = col + 1;
            if(top >= 0 && grid[top][col] == 1 && !vis[top][col]){
                vis[top][col] = 1;
                q.push({top, col});
                area++;
            }
            if(bottom < n && grid[bottom][col] == 1 && !vis[bottom][col]){
                vis[bottom][col] = 1;
                q.push({bottom, col});
                area++;
            }
            if(left >= 0 && grid[row][left] == 1 && !vis[row][left]){
                vis[row][left] = 1;
                q.push({row, left});
                area++;
            }
            if(right < m && grid[row][right] == 1 && !vis[row][right]){
                vis[row][right] = 1;
                q.push({row, right});
                area++;
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int ans = 0;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(grid[i][j] == 1 && vis[i][j] != 1){
                    int area = 0;
                    bfs(grid, vis, i, j, area);
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
};