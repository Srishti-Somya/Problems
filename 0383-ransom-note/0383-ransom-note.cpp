class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>mp;
        for( int i = 0; i < magazine.size() ; i++ )
        {
            mp[magazine[i]]++;
        }
        for( int j = 0 ; j < ransomNote.size() ; j++ )
        {
            if(mp.find(ransomNote[j]) != mp.end())
            {
                if(mp[ransomNote[j]] != 0)
                {
                    mp[ransomNote[j]]--;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};