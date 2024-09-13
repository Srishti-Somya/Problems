class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>res;
        for( int i = 0; i < queries.size() ; i++ )
        {
            int item = 0;
            for( int j = queries[i][0] ; j <= queries[i][1] ; j++)
            {
                item = item^arr[j];
            }
            res.push_back(item);
        }
        return res;
    }
};