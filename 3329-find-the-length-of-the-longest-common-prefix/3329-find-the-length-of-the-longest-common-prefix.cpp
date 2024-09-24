class Solution {
public:
    int CommonPrefixLength(int a,int b)
    {
        string first = to_string(a);
        string second = to_string(b);
        int first_len = first.length();
        int second_len = second.length();
        int mini = min(first_len,second_len);
        int count = 0;
        for(int i = 0; i < mini; i++)
        {
            if(first[i] == second[i])
            {
                count++;
            }
            else {
                break;
            }
        }
        return count;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // int arr1_len = arr1.size();
        // int arr2_len = arr2.size();
        // int maxi = 0;
        // for(int i = 0; i < arr1_len ; i++)
        // {
        //     for(int j = 0; j < arr2_len ; j++)
        //     {
        //         int n = CommonPrefixLength(arr1[i],arr2[j]);
        //         maxi = max(maxi,n);
        //         if (maxi == arr1[i] || maxi == arr2[j])
        //             break;
                
        //     }
        // }
        // return maxi;
        vector<string> v1;
        unordered_map<string, int> mp;

        for(auto it: arr1){
            string temp = to_string(it);
            string s;
            for(int i=0; i<temp.length(); i++){
                s.push_back(temp[i]);
                v1.push_back(s);
            }
        }
        for(auto it: arr2){
            string temp = to_string(it);
            string s;
            for(int i=0; i<temp.length(); i++){
                s.push_back(temp[i]);
                mp[s]++;
            }
        }
        sort(v1.begin(), v1.end(), [&](string& s1, string& s2){
            return s1.length()>s2.length();
        });

        int maxi=0;
        for(int i=0; i<v1.size(); i++){
            if(mp.find(v1[i])!=mp.end()){
                maxi = max(maxi, (int)v1[i].length());
                break;
            }
        }
        return maxi;
    }
};