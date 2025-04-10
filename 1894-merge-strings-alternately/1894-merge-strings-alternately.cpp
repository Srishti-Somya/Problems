class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = word1.size() + word2.size();
        string ans(len, '\0');
        int mini = min(word1.size(), word2.size());
        int j = 0;
        int k = 0;
        int i;
        for(i = 0 ; i < 2*mini ; i++ )
        {
            if(i %2 == 0){ans[i] = word1[j];
            j++;}
            else
            {
                ans[i] = word2[k];
                k++;
            }
        }
        while(j != word1.size())
        {
            ans[i] = word1[j];
            j++;i++;
        }

        while(k != word2.size())
        {
            ans[i] = word2[k];
            k++;i++;
        }
        return ans;
    }
};