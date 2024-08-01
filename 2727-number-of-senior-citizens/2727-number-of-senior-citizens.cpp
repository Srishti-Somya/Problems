class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for( int i = 0; i < details.size() ; i++)
        {
            string temp = details[i];
            if(temp[11] - '0' > 6 )
            {
                count++;
                continue;
            }
            if(temp[11] - '0' == 6 && temp[12] - '0' > 0)
            {
                count++;
            }
        }
        return count;
    }
};