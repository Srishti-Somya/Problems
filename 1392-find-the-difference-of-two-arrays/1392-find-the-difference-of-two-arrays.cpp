class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for( int i = 0 ; i < nums1.size() ; i++ )
        {
            mp1[nums1[i]]++;
        }
        for( int i = 0 ; i < nums2.size() ; i++ )
        {
            mp2[nums2[i]]++;
        }
        for( int i = 0 ; i < nums1.size() ; i++ )
        {
            if(mp2.find(nums1[i]) == mp2.end())
            {
                mp2[nums1[i]]++;
                ans[0].push_back(nums1[i]);
            }
        }
        for( int i = 0 ; i < nums2.size() ; i++ )
        {
            if(mp1.find(nums2[i]) == mp1.end())
            {
                mp1[nums2[i]]++;
                ans[1].push_back(nums2[i]);
            }
        }

        return ans;
    }
};