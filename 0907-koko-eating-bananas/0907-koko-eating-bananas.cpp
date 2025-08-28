class Solution {
public:
    long long func(vector<int>& piles, int mid){
        long long totalhrs = 0;
        for(int i = 0 ; i < piles.size() ; i++ ){
            totalhrs += ceil((double)piles[i]/(double)mid);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int end = piles[0], st = 1;
        for(int i = 0 ; i < n ; i++ ) end = max(end, piles[i]);

        while(st <= end){
            int mid = st + (end - st)/2;
            long long total = func( piles, mid);
            if(total <= h){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return st;



        // int n = piles.size();

        // // if(n > h) return -1;
        // int maxi = piles[0];
        // for(int i = 0 ; i < n ; i++ ) maxi = max(maxi, piles[i]);

        // int st = 1;
        // int k = maxi;
        // while(st <= maxi){
        //     int mid = st + (maxi - st)/2;
        //     int time = 0;
        //     for(int i = 0 ; i < n ; i++ ){
        //         if(time > h) break;
        //         int r = piles[i]%mid;
        //         time += piles[i]/mid;
        //         if(r) time++;
        //     }
        //     if(time <= h){
        //         // k = min(k, mid);
        //         maxi = mid - 1;
        //     } 
        //     else st = mid + 1;
        // }
        // return st;
    }
};