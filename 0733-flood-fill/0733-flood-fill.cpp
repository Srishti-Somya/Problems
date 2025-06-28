class Solution {
public:
    void bfs(int &sr, int &sc, vector<vector<int>>& image,vector<vector<int>>& vis, int &color, int &org){
        vis[sr][sc] = 1;
        queue<pair<int,int>>q;
        int n = image.size();
        int m = image[0].size();
        q.push({sr, sc});
        image[sr][sc] = color;
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            int top = row - 1, bottom = row+1;
            int left = col - 1, right = col+1;
            // if(   ){
                if(top >= 0 && image[top][col] == org && vis[top][col] != 1){
                    q.push({top, col});
                    image[top][col] = color;
                    vis[top][col] = 1;
                }
                if(bottom < n && image[bottom][col] == org && vis[bottom][col] != 1){
                    q.push({bottom, col});
                    image[bottom][col] = color;
                    vis[bottom][col] = 1;
                }
                if(left >= 0 && image[row][left] == org && vis[row][left] != 1){
                    q.push({row, left});
                    image[row][left] = color;
                    vis[row][left] = 1;
                }
                if(right < m && image[row][right] == org && vis[row][right] != 1){
                    q.push({row, right});
                    image[row][right] = color;
                    vis[row][right] = 1;
                }
            // }
            // for(int i = -1 ; i <= 1 ; i++ ){
            //     for(int j = -1 ; j <= 1 ; j++ ){
            //         int nrow = row + i;
            //         int ncol = col + j;
            //         if(nrow > 0 && nrow < n && ncol > 0 && ncol < m && image[nrow][ncol] == org && vis[nrow][ncol] != 1){
            //             image[nrow][ncol] = color;
            //             vis[nrow][ncol] = 1;
            //             q.push({nrow, ncol});
            //         }
            //     }
            // }
        }
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>vis(n, vector<int>(m,0));
        int org = image[sr][sc];
        bfs(sr, sc, image,vis, color, org);
        return image;
    }
};