class Solution {
public:
    string triangleType(vector<int>& nums) {
        int one = nums[0], two = nums[1], three = nums[2];
        if(one+two > three && two+three > one && one+three > two){
            if(one == two && two == three) return "equilateral";
            else if(one == two || two == three || three == one) return "isosceles";
            else return "scalene";
        }
        return "none";
    }
};