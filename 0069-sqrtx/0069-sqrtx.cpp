class Solution {
public:
    int mySqrt(int x) {
        int st = 1;
        int end = x;
        int ans = 0;
        while(st <= end){
            int mid = st + (end - st)/2;
            long long sqr = 1LL*mid*mid;
            if(sqr <= x){
                ans = max(ans, mid);
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }
};