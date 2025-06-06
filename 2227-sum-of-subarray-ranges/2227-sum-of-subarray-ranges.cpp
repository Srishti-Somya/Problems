//brute force use two loops and generate all subarrays
//and find the largest and smallest and then find range
// for O(n) = we need to compromise space
class Solution {
public:
    long long sumofsubarraymaximums(vector<int>& nums, int n){
        vector<int>nge(n);
        vector<int>pge(n);
        stack<int>st;
        long long ans = 0;
        for(int i = 0 ; i < n ; i++ ){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            pge[i] = st.empty()? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()){st.pop();}
        for(int i = n - 1; i >= 0 ; i-- ){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            nge[i] = st.empty()? n : st.top();
            st.push(i);
        }
        // for( int i = 0 ; i < n ; i++ ){
        //     ans  = ans + ((nge[i] - 1)*(i - pge[i])*(nums[i]));
        // }
        while(!st.empty()){st.pop();}

        vector<int>nse(n);
        vector<int>pse(n);
        for(int i = 0 ; i < n ; i++ ){
            while(!st.empty() && nums[st.top()] >= nums[i]){ st.pop(); }
            pse[i] = st.empty()? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()){st.pop();}
        for(int i = n - 1; i >= 0 ; i-- ){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            nse[i] = st.empty()? n : st.top();
            st.push(i);
        }
        for( int i = 0 ; i < n ; i++ ){
            long long leftMin=i-pse[i],rightMin=nse[i]-i;
            long long leftMax=i-pge[i],rightMax=nge[i]-i;
            ans +=(leftMax*rightMax-leftMin*rightMin)*nums[i];
        }
        return ans;
    }
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long largest = sumofsubarraymaximums(nums, n);
        // long long smallest = sumofsubarrayminimums(nums, n);
        return largest;
        // int maxi = INT_MIN;
        // int mini = INT_MAX;
        // long long ans = 0;
        // for(int i = 0 ; i < nums.size() ; i++ ){
        //     maxi = nums[i];
        //     mini = nums[i];
        //     for(int j = i + 1; j < nums.size() ; j++ ){
        //         maxi = max(maxi, nums[j]);
        //         mini = min(mini, nums[j]);
        //         ans += maxi - mini;
        //     }
        // }
        // return ans;
    }
};