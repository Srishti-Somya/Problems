class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int &sr, int &sc){
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>>q;
        vis[sr][sc] = 1;
        q.push({sr, sc});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            int top = row - 1, bottom = row + 1, left = col - 1, right = col + 1;
            if(top >= 0 && grid[top][col] == 'X' && !vis[top][col]){
                vis[top][col] = 1;
                q.push({top, col});
            }
            if(bottom < n && grid[bottom][col] == 'X' && !vis[bottom][col]){
                vis[bottom][col] = 1;
                q.push({bottom, col});
            }
            if(left >= 0 && grid[row][left] == 'X' && !vis[row][left]){
                vis[row][left] = 1;
                q.push({row, left});
            }
            if(right < m && grid[row][right] == 'X' && !vis[row][right]){
                vis[row][right] = 1;
                q.push({row, right});
            }
        }
    }
    int countBattleships(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int ans = 0;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(grid[i][j] == 'X' && vis[i][j] != 1){
                    ans++;
                    bfs(grid, vis, i, j);
                }
            }
        }
        return ans;
    }
};