class Solution {
public:
    void dfs(int start,vector<vector<int>>& adj, vector<int>& visited ){
        visited[start] = 1;
        for(auto it : adj[start]){
            if(!visited[it]){
                dfs(it, adj, visited);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adj(n);
        for(int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
                if(i != j && isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count = 0;
        vector<int>visited(n, 0);
        for(int i = 0 ; i < n ; i++ ){
            if(visited[i] == 0){
                count++;
                dfs(i, adj, visited);
            }
        }
        return count;
    }
};