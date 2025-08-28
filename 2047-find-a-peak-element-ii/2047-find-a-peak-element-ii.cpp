class Solution {
public:
    int findMaxidx(vector<vector<int>>& mat, int n, int mid){
        int maxi = -1;
        int idx = -1;
        for(int i = 0 ; i < n ; i++ ){
            if(mat[i][mid] > maxi){ 
                maxi = mat[i][mid];
                idx= i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int low = 0, high = m - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int maxrow = findMaxidx(mat, n, mid);
            int leftele = mid-1 >= 0 ? mat[maxrow][mid-1] : -1;
            int rightele = mid+1 < m ? mat[maxrow][mid+1] :-1;
            if(mat[maxrow][mid] > leftele && mat[maxrow][mid] > rightele)   
                return {maxrow, mid};
            else if(mat[maxrow][mid] < leftele){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};