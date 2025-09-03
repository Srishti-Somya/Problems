class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>>q;
        q.push({beginWord, 1});
        unordered_set<string>st(wordList.begin(), wordList.end());
        st.erase(beginWord);
        while(!q.empty()){
            string start = q.front().first;
            int steps = q.front().second;
            if(start == endWord) break;
            q.pop();
            
            for(int i = 0 ; i < start.size() ; i++ ){
                char check = start[i];
                for(char ch = 'a' ; ch <= 'z' ; ch++ ){
                    if(check != ch) start[i] = ch;
                    if(st.find(start) != st.end()){
                        st.erase(start);
                        q.push({start, steps + 1});
                    }
                }
                start[i] = check;
            }
        }
        return (!q.empty())? q.front().second:0;
    }
};