class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
    vector<int> target_time = times[targetFriend];
    vector<vector<int>> sortedTimes = times;
    sort(sortedTimes.begin(), sortedTimes.end());

    int n = sortedTimes.size();
    vector<int> chair_time(n, 0);
    for (const auto& time : sortedTimes) {
        for (int i = 0; i < n; ++i) {
            if (chair_time[i] <= time[0]) {
                chair_time[i] = time[1];
                if (time == target_time) {
                    return i; 
                }
                break;
            }
        }
    }
    
    return 0;
    }
};