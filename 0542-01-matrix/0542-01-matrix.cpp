// class Solution {
// public:
//     void bfs(pair<pair<int, int>, int> p, vector<vector<int>>& mat, vector<vector<int>>& ans){
//         int r = p.first.first;
//         int c = p.first.second;

//         int n = mat.size(), m = mat[0].size();
//         queue<pair<pair<int, int>, int>>q;
//         q.push({{r,c},0});

//         while(!q.empty()){
//             int row = q.front().first.first;
//             int col = q.front().first.second;
//             int count = q.front().second;
//             q.pop();

//             int drow[] = { -1, 0, 1, 0};
//             int dcol[] = {0, 1, 0 , -1};
//             for( int i = 0; i < 4 ; i++ ){
//                 int nrow = row + drow[i];
//                 int ncol = col + dcol[i];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
//                 {
//                     if(mat[nrow][ncol] == 0){
//                         ans[r][c] = count+1;
//                         break;
//                     }
//                     else{
//                         q.push({{nrow,ncol}, count+1});
//                     }
//                 }
//             }
//         }
//         while(!q.empty()) q.pop();
//         return;
//     }
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();
//         vector<vector<int>>ans(n, vector<int>(m,0));

//         queue<pair<pair<int, int>, int>>q;
//         for( int i = 0 ; i < n ; i++ ){
//             for( int j = 0; j < m ; j++ ){
//                 if(mat[i][j] == 1){
//                     q.push({{i, j},0});
//                 }
//             }
//         }

//         while(!q.empty()){
//             bfs(q.front(), mat, ans);
//             q.pop();
//         }
        
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, -1));
        queue<pair<pair<int, int>, int>> q;

        // Start BFS from all 0s
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < m ; j++) {
                if (mat[i][j] == 0) {
                    ans[i][j] = 0;
                    q.push({{i, j}, 0});
                }
            }
        }

        int drow[] = { -1, 0, 1, 0 };
        int dcol[] = { 0, 1, 0, -1 };

        while (!q.empty()) {
            auto [coord, dist] = q.front();
            int r = coord.first;
            int c = coord.second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                    // If not visited yet
                    if (ans[nrow][ncol] == -1) {
                        ans[nrow][ncol] = dist + 1;
                        q.push({{nrow, ncol}, dist + 1});
                    }
                }
            }
        }

        return ans;
    }
};
