class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for( int i = 0; i < arr.size() ; i++ )
        {
            while(arr[i] < 0)
            {
                arr[i] += k;
            }
            mp[arr[i]%k]++;
        }
        if(mp[0]%2 != 0)
        {
            return false;
        }
        for(int j = 1 ; j <= k/2 ; j++)
        {
            int counter = k - j;
            if(mp[j] != mp[counter])
            {
                return false;
            }
        }
        
        return true;
    }
};