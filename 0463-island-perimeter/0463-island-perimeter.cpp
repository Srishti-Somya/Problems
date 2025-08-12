class Solution {
public:
    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int &sr, int &sc, int &peri){
        int n = grid.size(), m = grid[0].size();
        vis[sr][sc] = 1;
        queue<pair<int, int>>q;
        q.push({sr, sc});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            int top = row - 1, bottom = row + 1;
            int right = col + 1, left = col - 1;

            if(top < 0 || grid[top][col] == 0 )peri++;
            if(bottom >= n  || grid[bottom][col] == 0 )peri++;
            if(left < 0 || grid[row][left] == 0 )peri++;
            if(right >= m || grid[row][right] == 0) peri++;

            if(top >= 0 && grid[top][col] == 1 && vis[top][col] != 1){
                q.push({top,col});
                vis[top][col] = 1;
            }
            if(bottom < n && grid[bottom][col] == 1 && vis[bottom][col] != 1){
                q.push({bottom,col});
                vis[bottom][col] = 1;
            }
            if(left >= 0 && grid[row][left] == 1 && vis[row][left] != 1){
                q.push({row,left});
                vis[row][left] = 1;
            }
            if(right < m && grid[row][right] == 1 && vis[row][right] != 1){
                q.push({row,right});
                vis[row][right] = 1;
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int sr, sc;
        for(int i = 0 ; i < grid.size() ; i++ ){
            for(int j = 0 ; j < grid[0].size() ; j++ ){
                if(grid[i][j] == 1){
                    sr = i;
                    sc = j;
                    break;
                }
            }
        }
        int ans = 0;
        bfs(grid, vis, sr, sc, ans);
        return ans;
    }
};