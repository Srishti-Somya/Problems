class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = 0; int count = 0;
        int i,j = 0;
        for(i = 0 ; i < k ; i++ ){
            if(s[i]=='a'||s[i]== 'e'||s[i]=='i'||s[i]=='o'||s[i] =='u'){
                count++;
            }
        }
        ans = max(ans, count);
        while(i < n){
            if(s[j]=='a'||s[j]== 'e'||s[j]=='i'||s[j]=='o'||s[j] =='u'){
                count--;
            }
            if(s[i]=='a'||s[i]== 'e'||s[i]=='i'||s[i]=='o'||s[i] =='u'){
                count++;
            }
            i++;
            j++;
            ans = max(ans, count);
        }
        return ans;
    }
};