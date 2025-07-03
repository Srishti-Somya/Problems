class Solution {
public:
    void bfs(vector<vector<char>>& board, vector<vector<int>>& vis){
        int n = board.size();
        int m = board[0].size();
        queue<pair<int, int>>q;
        for(int i = 0; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++){
                if(i == 0 || j== 0|| i == n-1|| j== m-1){
                    if(board[i][j] == 'O'){ q.push({i, j});}
                }
            }
        }
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            // cout<<row <<" "<<col
            q.pop();
            vis[row][col] = 1;
            int delrow[] = {-1, 0, 1, 0};
            int delcol[] = {0, 1, 0, -1};

            for(int i = 0; i < 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && board[nrow][ncol] == 'O' && vis[nrow][ncol] != 1){
                    // vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
        return;
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        bfs(board, vis);
        for(int i = 0; i < n; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(vis[i][j] == 0 && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        return;
    }
};