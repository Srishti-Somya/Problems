class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mp;
        for( int i = 0; i < allowed.size() ; i++ )
        {
            mp[allowed[i]]++;
        }
        int count = 0;
        for( int i = 0; i < words.size() ; i++ )
        {
            string temp = words[i];
            for( int j = 0; j < temp.size() ; j++ )
            {
                if(mp.find(temp[j]) == mp.end())
                {
                    count -= 1;
                    break;
                }
            }
            count += 1;
        }
        return count;
    }
};