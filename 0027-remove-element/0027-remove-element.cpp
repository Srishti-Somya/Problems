class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int count = 0;
        // for( int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i] == val)
        //     {
        //         auto it = find(nums.begin(), nums.end(),val);
        //         count++;
        //         if (it != nums.end()) {
        //         nums.erase(it);
        //         }
        //     }
            
        // }
        // return count;
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};