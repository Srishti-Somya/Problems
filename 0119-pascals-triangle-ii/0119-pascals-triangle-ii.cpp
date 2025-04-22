class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>triangle(rowIndex+1, vector<int>(rowIndex+1, 1));
        for(int i = 0; i < rowIndex+1 ; i++){
            for(int j = 1; j < i ; j++){
                triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
            }
        }
        return triangle[rowIndex];
    }
};