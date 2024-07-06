class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        if(colors.size() < 3)
        {
            return 0;
        }
        int n = colors.size() - 1;
        // int current = colors[0];
        int ans = 0;
        for(int i = 0; i < colors.size() ; i++ )
        {
            if(i == n-1 )
            {
                if(colors[i] == colors[0] && 1 - colors[i] == colors[n])
                {
                    ans++;
                }
            }
            if(i == n)
            {
                if(colors[i] == colors[1] && 1 - colors[i] == colors[0])
                {
                    ans++;
                }
            }
            if(i != n && i != n-1 && colors[i] == colors[i+2] && 1 - colors[i] == colors[i+1])
            {
                ans++;
            }
            // if(colors[i] != current)
            // {
            //     ans++;
            //     current = colors[i];
            // }
        }
        // if(colors[0] == colors[n] && ans != 0)
        // {
        //     ans--;
        // }
        return ans;
    }
};