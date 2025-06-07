class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        for(int i = 0 ; i < asteroids.size() ; i++ ){
            if(asteroids[i] > 0) st.push(asteroids[i]);
            else{
                while(!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i])){
                    st.pop();
                }
                if(!st.empty() && st.top() == abs(asteroids[i])) st.pop();
                else if( st.empty() || st.top() < 0) st.push( asteroids[i]);
            }
            // st.push(asteroids[i]);
            // while(!st.empty() && asteroids[i] < 0 && st.top() > 0){
            //     int val = st.top();
            //     st.pop();
            //     int val2 = st.top();
            //     st.pop();
            //     if(val > val2) {
            //         st.push(val);
            //     }else{
            //         st.push(val2);
            //     }
            // }
            
        }
        while(!st.empty()){ ans.push_back(st.top());
        st.pop();}
        reverse(ans.begin(), ans.end());
        return ans;
    }
};