class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        if(n < 3) return 0;
        char curr0 = s[0];
        char curr1 = s[1];
        char curr2 = s[2];
        if(curr0 != curr1 && curr1 != curr2 && curr0 != curr2){
            ans++;
        }
        int j = 3, i = 0;
        while(j < n){
            curr0 = curr1;
            curr1 = curr2;
            curr2 = s[j];
            if(curr0 != curr1 && curr1 != curr2 && curr0 != curr2){
                ans++;
            }
            i++;
            j++;
        }
        return ans;
    }
};