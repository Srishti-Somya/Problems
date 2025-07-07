class Solution {
public:
    bool dfs(int r, int c, vector<vector<char>>& board, string word, int idx, vector<vector<int>>& vis){
        if(idx >= word.size()) return true;
        int n = board.size();
        int m = board[0].size();

        if(r < 0 || r >= n || c < 0 || c >= m || vis[r][c] == 1|| board[r][c] != word[idx]) return false;

        vis[r][c] = 1;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
    
        for(int i = 0 ; i < 4 ; i++ ){
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];
            if(dfs(nrow, ncol, board, word, idx+1, vis) ){
                return true;
                // if(board[nrow][ncol] == word[idx]){
                //     ans |= dfs(nrow, ncol, board, word, idx+1);
                // }else{
                //     ans |= false;
                // }
            }
        }
        vis[r][c] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++ ){
                if(board[i][j] == word[0] && dfs(i, j, board, word, 0, vis)){
                    return true;
                }
            }
        }
        return false;
    }
};