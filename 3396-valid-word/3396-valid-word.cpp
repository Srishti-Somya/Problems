class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3 ) return false;
        int i = 0, vowel = 0, consonant = 0;
        while( i < word.size()){
            if(!isalnum(word[i])) return false;
            if(word[i] == 'a' ||word[i] == 'e' || word[i] == 'i' ||word[i] == 'o' ||word[i] == 'u' ||word[i] == 'A' ||word[i] == 'E' ||word[i] == 'I' ||word[i] == 'O' ||word[i] == 'U'){
                vowel++;
            }
            else if (word[i] < '0' || word[i] > '9'){
                consonant++;
            }
            i++;
        }
        if(vowel == 0||consonant == 0){
            return false;
        }
        return true;
    }
};