class Solution {
public:
    long long fact(long long n)
    {
        long long ans = 1;
        // for(int i = 1; i <= n ; i++ )
        // {
        //     ans *= i;
        // }
        ans = (n*(n+1))/2;
        return ans;
    }
    long long countSubstrings(string s, char c) {
        long long ans;
        long long count = 0;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(s[i] == c)
            {
                count++;
            }
        }
        if(count == 0)
        {
            return 0;
        }
        ans = fact(count);
        return ans;
        // for(int i = 0 ; i < s.size() ; i++ )
        // {
        //     char curr = s[i];
        //     if(curr == c)
        //     {
        //         for(int j = i ; j < s.size() ; j++ )
        //         {
        //             if(s[j] == c)
        //             {
        //                 ans++;
        //             }
        //         }
        //     }
        // }
        return ans;
    }
};