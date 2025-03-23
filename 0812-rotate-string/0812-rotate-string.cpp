class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        {
            return false;
        }
        string temp = s + s;
        int n = goal.size();
        for(int i = 0 ; i < temp.size() ; i++ )
        {
            if(temp.substr(i, n) == goal)
            {
                return true;
            }
        }
        return false;
        // if(s == goal)
        // {
        //     return true;
        // }
        // if(s.size() != goal.size())
        // {
        //     return false;
        // }
        // for( int i = 0; i < s.size() ; i++ )
        // {
        //     rotate(s.begin(), s.begin() + 1, s.end());
        //     if(s == goal)
        //     {
        //         return true;
        //     }
        // }
        // return false;
        // if(s.size() != goal.size())
        // {
        //     return false;
        // }
        // int temp;
        // for(int i = 0; i < s.size() ; i++ )
        // {
        //     if(goal[0] == s[i])
        //     {
        //         temp = i;
        //         break;
        //     }
        // }
        // int temp2 = temp;
        // int count;
        // for(int i = 0 ; i < goal.size() ; i++)
        // {
        //     if(temp != s.size())
        //     {
        //         if(goal[i] != s[temp])
        //         {
        //             return false;
        //         }
        //     }
        //     else
        //     {
        //         count = i;
        //         break;
        //     }
        //     temp++;
        // }

        // for(int i = 0; i < temp2 ; i++ )
        // {
        //     if(s[i] != goal[count])
        //     {
        //         return false;
        //     }
        //     count++;
        // }
        // return true;
    }
};