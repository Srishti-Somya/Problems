class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size() - 1;
        int i = 0;
        while(i < n){
            int sum = numbers[i] + numbers[n];
            if(sum > target){
                n--;
            }else if(sum < target){
                i++;
            }else{
                return {i+1, n+1};
            }
        }
        return {-1,-1};
    }
};