class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int diff = INT_MIN;
        int mini = arrays[0][0];
        int maxi = arrays[0].back();

        for(int i = 1; i < arrays.size() ; i++ )
        {
            // int n = arrays[i].size();
            // int m = arrays[i+1].size();
            diff = max(diff, abs(arrays[i].back() - mini));
            diff = max(diff, abs(maxi - arrays[i][0]));
            
            mini = min(mini, arrays[i][0]);
            maxi = max(maxi, arrays[i].back());
        }
        return diff;
    }
};