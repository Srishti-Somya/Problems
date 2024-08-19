class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string common = "";
        if(strs.size() == 1)
        {
            return strs[0];
        }
        string curr = strs[0];
        for( int i = 0; i < strs.size(); i++ )
        {
            string com = "";
            string temp = strs[i];
            for( int j = 0; j < min(curr.size(),temp.size()) ; j++ )
            {
                if(curr[j] == temp[j])
                {
                    com.push_back(curr[j]);
                }
                else
                {
                    break;
                }
            }
            curr = com;
        }
        return curr;
    }
};