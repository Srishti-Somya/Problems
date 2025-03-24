class Solution {
public:
    string reverseWords(string s) {
        map<int, string>mp;
        string temp = "";
        int count = 0;
        reverse(s.begin(), s.end());
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(s[i] == ' ')
            {
                reverse(temp.begin(), temp.end());
                mp[count] = temp;
                count++;
                temp = "";
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        reverse(temp.begin(), temp.end());
        mp[count] = temp;
        string ans = "";
        for( auto itr = mp.begin() ; itr != mp.end() ; itr++)
        {
            if(itr->second == "")
            {
                continue;
            }
            ans += itr->second;
            ans += " ";
            // auto itr2 = ++itr;
            // if(itr2 != mp.end())
            // {
            //     temp += " ";
            // }
        }
        ans.pop_back();
        return ans;
    //     reverse(s.begin(), s.end());
    //     string temp = " ";
    //     string ans = "";
    //     for(int i = 0 ; i < s.size() ; i++ )
    //     {
    //         if(s[i] == ' ')
    //         {
    //             reverse(temp.begin(), temp.end());
    //             ans += temp;
    //             temp = " ";
    //         }
    //         else
    //         {
    //             temp.push_back(s[i]);
    //         }
    //     }

    //     reverse(temp.begin() , temp.end());
    //     ans += temp;
    //     return ans;
    }
};