class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 1, end = n - 2;
        if(arr[0]>arr[1])return 0;
        else if(arr[n-1] > arr[n-2]) return n-1;
        if(n == 1) return 0;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid+1]){
                return mid;
            }else if(arr[mid-1] > arr[mid] ) end = mid - 1;
            else st = mid + 1;
        }
        return -1;










        // int peak = 0;
        // int st = 0;
        // int end = arr.size() - 1;
        // int mid,pot1,pot2;
        // while(st <= end){
        //     mid = st + (end-st)/2;
        //     if(arr[mid] > arr[peak]) peak = mid;
        //     if(mid != 0)pot1 = mid - 1;
        //     else pot1 = mid;
        //     if(mid != arr.size() - 1)pot2 = mid + 1;
        //     else pot2 = mid;
        //     if(arr[pot1] < arr[pot2]){
        //         st = mid + 1;
        //     }
        //     else if(arr[pot1] > arr[pot2]){
        //         end = mid - 1;
        //     }
        //     else{
        //         return mid;
        //     }
        // }
        // return peak;
    }
};