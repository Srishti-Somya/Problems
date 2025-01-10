class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        map<char, int>mp;
        for(int i = 0; i < words2.size() ; i++ )
        {
            int temp[26] = {0};
            for( char &j : words2[i])
            {
                // if()
                temp[j - 'a']++;
                mp[j] = max(mp[j], temp[j-'a']);
            }
        }

        for(int i = 0 ; i < words1.size() ; i++ )
        {
            unordered_map<char, int> mp2;
            for(int j = 0 ; j < words1[i].size() ; j++ )
            {
                mp2[words1[i][j]]++;
            }
            int flag = 0;
            for(auto itr = mp.begin() ; itr != mp.end() ; itr++ )
            {
                if(itr->second > mp2[itr->first])
                {
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                ans.push_back(words1[i]);
            }
        }
        return ans;
    }
};