class Solution {
public:
    vector<int> rightSmaller(vector<int>& heights){
        int n = heights.size();
        vector<int>right(n);
        stack<int>st;
        for( int i = n-1; i >= 0 ; i-- ){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            right[i] = st.empty()?n:st.top();
            st.push(i);
        }
        return right;
    }
    vector<int> leftSmaller(vector<int>& heights){
        int n = heights.size();
        vector<int>left(n);
        stack<int>st;
        for( int i = 0; i < n ; i++ ){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            left[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        return left;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> right = rightSmaller(heights);
        vector<int> left = leftSmaller(heights);
        int area = 0;
        for( int i = 0 ; i < heights.size() ; i++ ){
            int a = heights[i] * (right[i] - left[i] - 1);
            area = max(area, a);
        }
        return area;
    }
};