class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(), s.end());
        vector<pair<int, char>>vec;
        for(int i = 0 ; i < s.size() ; ){
            char curr = s[i];
            int j = i+1, count = 1;
            while(s[j] == curr){
                count++;
                j++;
            }
            i = j;
            vec.push_back({count, curr});
        }
        sort(vec.rbegin(), vec.rend());
        string res = "";
        for(int i = 0 ; i < vec.size() ; i++ ){
            int j = vec[i].first;
            while(j){
                res.push_back(vec[i].second);
                j--;
            }
        }
        // cout<<s;
        return res;
    }
};