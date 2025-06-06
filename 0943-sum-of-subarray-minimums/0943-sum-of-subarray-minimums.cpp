//brute force : generating all the subarrays and 
//finding the minimums and adding them

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>st;
        int n = arr.size();
        vector<int>nse(n);
        vector<int>pse(n);
        int ans = 0;
        for(int i = 0 ; i < arr.size() ; i++ ){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = n-1; i >= 0 ; i-- ){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()) nse[i] = n;
            else nse[i] = st.top();
            st.push(i);
        }
        for( int i = 0 ; i < n ; i++ ){
            ans = (ans +  ((nse[i] - i ) * (i - pse[i]) * 1LL) * arr[i]) % 1000000007;
            ans %= 1000000007;
        }
        return ans;
        // int ans = 0;
        // for( int i = 0 ; i < arr.size() ; i++ ){
        //     int mini = arr[i];
        //     for(int j = i ; j < arr.size() ; j++ ){
        //         mini = min(mini, arr[j]);
        //         ans += mini;
        //         ans = ans % 1000000007;
        //     }
        // }
        // return ans;
    }
};