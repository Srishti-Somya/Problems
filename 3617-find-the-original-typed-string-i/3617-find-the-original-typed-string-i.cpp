class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        // unordered_map<char, int>mp;
        for(int i = 1 ; i < word.size();i++){
            if(word[i] == word[i-1]){
                count++;
            }
        }
        return count;
    }
};