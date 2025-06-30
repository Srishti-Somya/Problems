class Solution {
public:
    void bfs(queue<pair<pair<int, int>, int>>q, vector<vector<int>>& grid, vector<vector<int>>& vis, int &maxi){
        int n = grid.size();
        int m = grid[0].size();
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int count = q.front().second;
            maxi = max(maxi,count);
            q.pop();
            vis[row][col] = 1;
            int delrow[] = { -1, 0, 1, 0};
            int delcol[] = { 0, 1, 0, -1};
            for(int i = 0; i < 4; i++ ){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 1){
                    grid[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, count + 1});
                }
            }
        }
        return;

    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int, int>, int>>q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));

        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(grid[i][j] == 2){
                    q.push({{i, j},0});
                    vis[i][j] = 1;
                }
            }
        }
        int count = 0;
        bfs(q, grid, vis, count);
        for(int i = 0; i < n;i++){
            for(int j = 0 ; j < m ; j++ ){
                if(grid[i][j] == 1) return -1;
            }
        }
        return count;
    }
};