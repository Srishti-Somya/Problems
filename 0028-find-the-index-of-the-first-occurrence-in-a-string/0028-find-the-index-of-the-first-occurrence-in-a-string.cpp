class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        return haystack.find(needle);
    }
};