class Solution {
public:
    
    void create_substring(int &n, string &temp, vector<string> &ans, int i, unordered_map<string, int> &mp)
    {
        if(i >= n)
        {
            cout<< temp << " ";
            int flag = 0;
            for(int i = 0; i < temp.size()-1; i++)
            {
                string s1 = temp.substr(i, 2);
                if(s1[0] == '0' && s1[1] == '0')
                {
                    flag = 1;
                    break;
                }
//                 if(s1[1] == '1' || s1[0] == '1')
//                 {
//                     if(mp.find(temp) != mp.end())
//                     {
//                         continue;
//                     }
//                     else
//                     {
//                         ans.push_back(temp);
//                         mp[temp] = 1;
//                     }
                    
//                 }
            }
            if(flag == 0)
            {
                ans.push_back(temp);
            }
            return;
        }
        
        temp[i] = '0';
        create_substring(n, temp, ans, i+1, mp);
        // temp.pop_back();
        // create_substring(n, temp, ans);
        temp[i] = '1';
        create_substring(n, temp, ans, i+1, mp);
        // temp.pop_back();
        return;
    }
    
    vector<string> validStrings(int n) {
        if(n == 1)
        {
            return {"0", "1"};
        }
        string temp = "";
        for(int i = 0; i < n ; i++)
        {
            temp.push_back('0');
        }
        
        unordered_map<string, int>mp;
        vector<string> ans;
        create_substring(n, temp, ans, 0, mp);
        return ans;
        
    }
};