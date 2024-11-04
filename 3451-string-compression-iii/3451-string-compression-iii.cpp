class Solution {
public:
    string compressedString(string word) {
        string comp ="";
        // sort(word.begin(),word.end());
        int count = 1;
        char current = word[0];
        for(int i = 1; i < word.size(); i++)
        {
            if(word[i] == current && count < 9)
            {
                count++;
            }
            else //if(count==9 || word[i] != word[i-1])
            {
                comp += to_string(count);
                comp += word[i-1];
                current = word[i];
                count = 1;
            }
        }
        comp += to_string(count);
        comp += current;
        return comp;
    }
};