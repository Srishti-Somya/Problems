class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int>mp;
        vector<vector<string>> ans;
        vector<int> no (strs.size());
        int curr = 1;
        for( int i = 0 ; i < strs.size() ; i++ )
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(mp.find(temp) != mp.end())
            {
                no[i] = mp[temp];
            }else{
                mp[temp] = curr;
                no[i] = curr;
                curr++;
            }
        }
        for( int j = 1 ; j < curr ; j++ )
        {
            vector<string> cur;
            for( int i = 0 ; i < no.size() ; i++ ){
                if(no[i] == j){
                    cur.push_back(strs[i]);
                }
            }
            ans.push_back(cur);
        }
        return ans;
    }
};