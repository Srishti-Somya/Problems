class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int>maximum_r(n);
        maximum_r[n-1] = nums[n-1];
        for(int i = n-2 ; i >= 0; i--)
        {
            maximum_r[i] = max(maximum_r[i+1],nums[i]);
        }
        int ramp = 0;
        int i = 0; 
        int j = 0;

        while(j < n)
        {
            while(i < j && nums[i] > maximum_r[j])
            {
                i++;
            }
            ramp = max(ramp, j-i);
            j++;
        }
        return ramp;

        // stack<pair<int,int>>st;
        // for(int i = 0; i < nums.size() ; i++ )
        // {
        //     st.push({nums[i],i});
        // }
        // pair<int,int> counter = st.top();
        // st.pop();
        // int ramp = 0;
        // while(!st.empty())
        // {
        //     if(st.top().first >= counter.first)
        //     {
        //         counter = st.top();
        //     }
        //     ramp = max(ramp, counter.second - st.top().second);
        //     st.pop();
        // }
        // return ramp;

        // int ramp = 0;
        // for(int i = 0 ; i < nums.size() ; i++ )
        // {
        //     for(int j = i+1 ; j < nums.size() ; j++ )
        //     {
        //         if(nums[i] <= nums[j])
        //         {
        //             ramp = max(ramp, j-i);
        //         }
        //     }
        // }
        // return ramp;
    }
};