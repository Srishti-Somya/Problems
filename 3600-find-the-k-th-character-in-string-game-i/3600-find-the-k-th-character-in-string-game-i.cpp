class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.size() < k) {
            string temp = word;
            for (int i = 0; i < word.size(); i++) {
                if (word[i] == 'z') {
                    temp.push_back('a');
                } else {
                    temp.push_back(word[i] + 1);
                }
            }
            word = temp;
        }
        return word[k - 1];
    }
};