class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int count = 0;
        vector<int>prefix_sum;
        for(int i = 0 ; i < words.size() ; i++ )
        {
            int n = words[i].size() - 1;
            if((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && (words[i][n] == 'a' || words[i][n] == 'e' || words[i][n] == 'i' || words[i][n] == 'o' || words[i][n] == 'u'))
            {
                count++;
            }
            prefix_sum.push_back(count);
            // else
            // {
            //     words[i] = "0";
            // }
            // cout<<words[i]<< " ";
        }
        vector<int>ans;
        for(int j = 0 ; j < queries.size() ; j++ )
        {
            // int count = 0;
            // for(int i = queries[j][0] ; i <= queries[j][1] ; i++ )
            // {
            //     int n = words[i].size() - 1;
            //     if(words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u')
            //     {
            //         if(words[i][n] == 'a' || words[i][n] == 'e' || words[i][n] == 'i' || words[i][n] == 'o' || words[i][n] == 'u')
            //         {
            //             count++;
            //         }
            //     }
            // }
            int right = queries[j][1];
            int left = queries[j][0] - 1;
            if(left < 0)
            {
                ans.push_back(prefix_sum[right]);
            }
            else
            {
                ans.push_back(prefix_sum[right] - prefix_sum[left]);
            }
            
        }
        return ans;
    }
};