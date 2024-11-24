class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int neg_num = 0;
        int min_value = INT_MAX;
        for(int i = 0 ; i < matrix.size() ; i++ )
        {
            for( int j = 0 ; j < matrix[i].size() ; j++ )
            {
                if(matrix[i][j] < 0)
                {
                    neg_num++;
                }
                if(abs(matrix[i][j]) < min_value)
                {
                    min_value = abs(matrix[i][j]);
                }
                sum += abs(matrix[i][j]);
            }
        }
        if((neg_num % 2) == 0)
        {
            return sum;
        }
        return (sum - (2 * min_value));
    }
};