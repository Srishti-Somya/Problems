class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;
        while(left < right)
        {
            int min_height;
            int width = right - left;
            if(height[left] > height[right]){
                min_height = height[right];
                right--;
            }else{
                min_height = height[left];
                left++;
            }
            int curr_area = min_height * width;
            area = max(area, curr_area);
        }
        return area;
    }
};