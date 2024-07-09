class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double current = 0;
        double waiting = 0;
        for( int i = 0 ; i < n ; i++)
        {
            if(customers[i][0] > current)
            {
                current += customers[i][0] - current;
            }
            current += customers[i][1];
            waiting += current - customers[i][0];
        }
        return waiting/n;
    }
};