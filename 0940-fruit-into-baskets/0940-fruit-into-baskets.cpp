class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int st = 0, end = 0, count = 0, maxlen = 0;
        unordered_map<int, int>mp;
        while(end < n){
            // if(mp.find(fruits[end]) == mp.end()){
                mp[fruits[end]]++;
                if(mp.size() > 2){
                    // int val = fruits[st];
                    while(mp.size() > 2){
                        mp[fruits[st]]--;
                        if(mp[fruits[st]] == 0) mp.erase(fruits[st]);
                        st++;
                    }
                    // mp.erase(val);
                    // st++;
                    // continue;
                }
                
            // }
            if(mp.size() < 3){
            maxlen = max(maxlen, end - st + 1);
            }
            end++;
        }
        return maxlen;
    }
};