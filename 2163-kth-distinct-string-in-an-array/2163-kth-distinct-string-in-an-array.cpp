class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for (const auto& x : arr) {
            mp[x]++;
        }
        
        string ans = "";
        int count = 0;
        for (const auto& x : arr) {
            if (mp[x] == 1) {
                ans = x;
                count++;
            }
            
            if (count == k) {
                return ans;
            }
        }
        return "";
    }
};