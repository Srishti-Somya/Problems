class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0, r = n-1;
        while(l <= r){
            int mid = l + (r- l)/2;
            if(arr[mid] - (mid + 1) >= k){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l + k;
        // int num = 1;
        // int n = arr.size();
        // int i = 0;
        // while( i < n && k > 0){
        //     if(arr[i] == num){//not missing
        //         i++;
        //     }else{
        //         k--;
        //     }
        //     num++;
        // }
        // while(k--){
        //     num++;
        // }
        // return num-1;
    }
};