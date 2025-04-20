class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int absent = 0;
        int start = 1;
        int st = 0, n = arr.size();
        while(st < n){
            if( start == arr[st]){
                st++;
            }
            else{
                absent++;
            }
            if(absent == k){
                return start;
            }
            start++;
        }
        if(st == n){
            while(absent < k){
                absent++;
                start++;
            }
        }
        return start-1;
    }
};