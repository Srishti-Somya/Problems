class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i = 0 ; i < words.size() ; i++ )
        {
            int res = words[i].find(pref);
            if(res != string::npos && res == 0)
            {
                count++;
            }
        }
        return count;
    }
};