class Solution {
public:
    string getEncryptedString(string s, int k) {
        string str = "";
        int n = s.size();
        for(int i = 0 ; i < n ; i++ )
        {
            int idx = k + i ;
            idx = idx % n;
            str.push_back(s[idx]);
        }
        return str;
    }
};