class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for( int i = 0 ; i < chalk.size() ; i++ )
        {
            sum += chalk[i];
        }
        k = k % sum;
        while(true)
        {
            for( int i = 0 ; i < chalk.size() ; i++ )
            {
                if(k >= chalk[i])
                {
                    k -= chalk[i];
                }
                else
                {
                    return i;
                }
            }
        }
        return -1;
    }
};