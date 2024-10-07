class Solution {
public:
    int minLength(string s) {
        string str1 = "AB";
        string str2 = "CD";
        while(true)
        {
            size_t found1 = s.find(str1);
            size_t found2 = s.find(str2);
            if (found1 == string::npos && found2 == string::npos)
            {
                return s.size();
            }
            if(found1 != string::npos)
            {
                s.erase(found1,2);
                continue;
            }
            if(found2 != string::npos)
            {
                s.erase(found2,2);
                continue;
            }
        }
        return s.size();
    }
};