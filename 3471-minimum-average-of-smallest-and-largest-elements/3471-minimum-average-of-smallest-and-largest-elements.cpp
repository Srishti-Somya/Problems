class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>avg;
        if(nums.size() == 0)
        {
            double val = 0;
            return val;
        }
        sort(nums.begin(), nums.end());
        
        int i = 0;
        int j = nums.size() - 1;
        while(i < j)
        {
            double ele = nums[i] + nums[j];
            ele = ele / 2;
            i++;
            j--;
            avg.push_back(ele);
        }
        sort(avg.begin(), avg.end());
        return avg[0];
    }
};