class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        unordered_map<int, int>mp;
        int count = 0;
        if(A[0] == B[0]){
            count++;
        }
        ans.push_back(count);
        mp[A[0]]++;
        mp[B[0]]++;
        for(int i = 1; i < A.size() ; i++ )
        {
            if(A[i] == B[i]){
                count++;
                ans.push_back(count);
                continue;
            }
            if(mp.find(A[i]) != mp.end()){
                count++;
            }else{
                mp[A[i]] = 1;
            }
            if(mp.find(B[i]) != mp.end()){
                count++;
            }else{
                mp[B[i]] = 1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};