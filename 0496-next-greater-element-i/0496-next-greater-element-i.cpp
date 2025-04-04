class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for( int i = 0 ; i < nums1.size() ; i++ )
        {
            int j = 0;
            while(nums2[j] != nums1[i])
            {
                j++;
            }
            int flag = 0;
            while(j < nums2.size())
            {
                if(nums2[j] > nums1[i]){
                    ans.push_back(nums2[j]);
                    flag = 1;
                    break;
                }
                j++;
            }
            if(flag == 0){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};