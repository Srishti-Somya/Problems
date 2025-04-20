class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        // if(n > h) return -1;
        int maxi = piles[0];
        for(int i = 0 ; i < n ; i++ ) maxi = max(maxi, piles[i]);

        int st = 1;
        int k = maxi;
        while(st <= maxi){
            int mid = st + (maxi - st)/2;
            int time = 0;
            for(int i = 0 ; i < n ; i++ ){
                if(time > h) break;
                int r = piles[i]%mid;
                time += piles[i]/mid;
                if(r) time++;
            }
            if(time <= h){
                k = min(k, mid);
                maxi = mid - 1;
            } 
            else st = mid + 1;
        }
        return k;
    }
};