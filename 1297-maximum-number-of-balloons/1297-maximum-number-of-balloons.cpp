class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // unordered_map<int, int> mp;
        int temp[26];
        for(int i = 0; i < text.size() ; i++ )
        {
            temp[text[i]-'a']++;
        }
        temp[11] /= 2;
        temp[14] /= 2;
        return min(temp[1],min(temp[0], min(temp[11],min(temp[14], temp[13]))));
    }
};