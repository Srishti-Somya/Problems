class Solution {
public:
    bool isValid(vector<int>& weights, int days, int mid){
        int curr_weight = 0, curr_days = 0;
        for(int i = 0 ; i < weights.size() ; i++ ){
            curr_weight += weights[i];
            if(curr_weight > mid){
                curr_days++;
                curr_weight = weights[i];
            }
            // if(curr_weight + weights[i] <= mid){
            //     curr_weight += weights[i];
            // }else{
            //     curr_days++;
            //     curr_weight = weights[i];
            // }
        }
        curr_days++;
        if(curr_days <= days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int st = 0, end = 0;
        for(int i = 0 ; i < weights.size() ; i++ ){
            st = max(st, weights[i]);
            end += weights[i];
        }
        int res;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isValid(weights, days, mid)){
                res = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return res;
    }
};