class Solution {
public:
    bool isValid(vector<int>& bloomDay, int m, int k, int mid){
        // int n = bloomDay.size();
        // vector<bool>check(n, false);
        int cnt = 0, temp = 0;
        for(int i = 0 ; i < bloomDay.size() ; i++ ){
            if(bloomDay[i] <= mid) {
                // check[i] = true;
                temp++;
                if(temp == k){cnt++; temp = 0;}
            }
            else{
                temp = 0;
            } 
        }
        if(cnt >= m) return true;
        return false;
        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        // int possible = m*k;
        // if(possible > bloomDay.size()) return -1;
        
        int st = bloomDay[0], end = bloomDay[0];
        for(int i = 0 ; i < bloomDay.size() ; i++ ){
            st = min(st, bloomDay[i]);
            end = max(end, bloomDay[i]);
        }
       
        int ans = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isValid(bloomDay, m, k, mid)){
                ans = mid;
                end = mid - 1;
            }else{
                st  = mid + 1;
            }
        }
        return ans;
    }
};