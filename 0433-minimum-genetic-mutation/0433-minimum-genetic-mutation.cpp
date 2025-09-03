class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        queue<pair<string, int>>q;
        q.push({startGene, 0});
        unordered_set<string>st(bank.begin(), bank.end());
        st.erase(startGene);
        char arr[] = {'A', 'C', 'G', 'T'};
        while(!q.empty()){
            string gene = q.front().first;
            int changes = q.front().second;
            if(gene == endGene) break;
            q.pop();
        
            for(int i = 0 ; i < gene.size() ; i++ ){
                char check = gene[i];
                for(int j = 0 ; j < 4 ; j++ ){
                    gene[i] = arr[j];
                    if(st.find(gene) != st.end()){
                        st.erase(gene);
                        q.push({gene, changes + 1});
                    } 
                }
                gene[i] = check;
            }
        }
        return (!q.empty()) ? q.front().second : -1;
        
    }
};