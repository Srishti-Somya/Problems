class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int>v;
        unordered_map<char, int>c;
        int max_v = 0, max_c = 0;
        for( int i = 0 ; i < s.size() ; i++ ){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){
                v[s[i]]++;
                max_v = max(max_v, v[s[i]]);
            }else{
                c[s[i]]++;
                max_c = max(max_c, c[s[i]]);
            }
        }
        return max_v+max_c;
    }
};