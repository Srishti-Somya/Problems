class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        // for( int i = 0; i < n ; i++ )
        // {

            if(haystack.find(needle) != string::npos)
            {
                return haystack.find(needle);
            }
        // }
        return -1;
    }
};