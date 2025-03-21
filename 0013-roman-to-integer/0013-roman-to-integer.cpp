class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int ans = 0;
        int n = s.size();
        for(int i = 0 ; i < n - 1; i++ )
        {
            if(s[i] == 'I' && s[i+1] == 'V' || s[i] == 'I' && s[i+1] == 'X')
            {
                ans -= mp['I'];
            }
            else if(s[i] == 'X' && s[i+1] == 'L' || s[i] == 'X' && s[i+1] == 'C')
            {
                ans -= mp['X'];
            }
            else if(s[i] == 'C' && s[i+1] == 'D' || s[i] == 'C' && s[i+1] == 'M')
            {
                ans -= mp['C'];
            }
            else 
            {
                ans += mp[s[i]];
            }
        }
        ans += mp[s[n - 1]];
        return ans;
    }
};