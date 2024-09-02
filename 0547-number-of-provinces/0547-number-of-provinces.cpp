class Solution {
public:
    void bfs(vector<vector<int>>& isConnected, vector<int> &visited, int n)
    {
        // vector<int> visited(n+1, 0);
        queue<int> q;
        q.push(n);
        // visited[1] = 1;
        while( !q.empty() )
        {
            int node = q.front();
            q.pop();
            // visited[node] = 1;
            for(int i = 0; i < isConnected[node].size() ; i++)
            {
                if(isConnected[node][i] == 1)
                {
                    if(i == node)
                    {
                        visited[i] = 1;
                    }
                    if(!visited[i])
                    {
                        q.push(i);
                        visited[i] = 1;
                    }
                }
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int count = 0;
        for( int i = 0; i < n ; i++ )
        {
            if(!visited[i])
            {
                count++;
                bfs(isConnected, visited, i);
            }
            else
            {
                continue;
            }
        }
        return count;
        // visited[1] = 1;
        // while(!q.empty())
        // {
            // int node = q.top();
            // q.pop();
            // for( int i = 1; i <= n ; i++ )
            // {
            //     for( int j = 1; j <= n ; j++ )
            //     {
            //         if(isConnected[i][j] == 1)
            //         {
            //             visited[i] = count;
            //         }
            //     }
            // }
            // for( int i = 1 ; i <= isConnected[node].size() ; i++ )
            // {
            //     if(isConnected[node][i] == 1)
            //     {
            //         visited[i] = 1;
            //     }
            // }
        // }
    }
};