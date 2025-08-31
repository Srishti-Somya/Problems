class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int st = 0, end = 0, len = 0;
        unordered_map<char, int>mp;
        while(end < n){
            if(mp.find(s[end]) != mp.end()){
                while(st <= mp[s[end]]){
                    mp.erase(s[st]);
                    st++;
                }
            }
            mp[s[end]] = end;
            len = max(len, end - st + 1);
            end++;
        }
        return len;





        // unordered_map<char, int>mp;
        // int len = 0;
        // int start = 0;
        // int ans = 0;
        // int st = 0;
        // for(int i = 0; i < s.size() ; i++ ){
        //     if(mp.find(s[i]) != mp.end()){
        //         start = mp[s[i]];
        //         len = i - start;
        //         // cout<< "len= " << len << " ";
        //         while(st <= start){
        //             mp.erase(s[st]);
        //             st++;
        //         } 
        //     }
        //     else{
        //         len++;
        //         // cout<< "len= " << len << " ";
        //     }
        //     mp[s[i]] = i;
        //     ans = max(len, ans);
        //     // cout<< "ans= " << ans << endl;
        // }
        // return ans;
    }
};