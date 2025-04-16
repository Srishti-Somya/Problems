class Solution {
public:
    int countHomogenous(string s) {
        char curr = s[0];
        int ans = 1;
        unordered_map<char,int>mp;
        mp[curr] = 1;
        for(int i = 1 ; i < s.size() ; i++ )
        {
            if(s[i] == curr){
                mp[curr]++;
            }
            else{
                mp[curr] = 0;
                curr = s[i];
                mp[curr] = 1;
            }
            ans += mp[curr];
            ans = ans%(1000000007);
            // ans++;
        }
        return ans;
    }
};