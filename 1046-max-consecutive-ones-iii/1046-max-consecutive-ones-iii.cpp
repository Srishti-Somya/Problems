class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int st = 0, end = 0, count = 0, len = 0, maxlen = 0;
        while(end < n){
            if(nums[end] == 0){
                if(count < k){
                    len++;
                    count++;
                }else{
                    while(count >= k){
                        if(nums[st] == 0){
                            count--;
                        }
                        st++;
                        len--;
                    }
                    continue;
                }
            }else{
                len++;
            }
            end++;
            maxlen = max(maxlen, len);
        }
        return maxlen;
    }
};