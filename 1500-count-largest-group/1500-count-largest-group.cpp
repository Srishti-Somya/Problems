class Solution {
public:
    int countLargestGroup(int n) {
        int siz = 0;
        unordered_map<int, int>mp;
        for(int i = 1 ; i <= n ; i++ ){
            int sum = 0;
            int j = i;
            while(j){
                sum += j%10;
                j/=10;
            }
            mp[sum]++;
            siz = max(siz, mp[sum]);
        }
        int ans = 0;
        for(auto it = mp.begin() ; it != mp.end() ; it++ ){
            if(it->second == siz){
                ans++;
            }
        }
        return ans;
    }
};