class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        int n = s.size();
        int black = 0;
        // int white = 0;
        // conunt black balls as you go ahead, 
        // and add the number to the answer
        for( int i = 0; i < n ; i++ )
        {
            if(s[i] == '0')
            {
                count += black;
            }
            else
            {
                black++;
            }
        }
        // //using bubble sort
        // bool swapped = false;
        // for(int i = 0; i < n - 1 ; i++ )
        // {
        //     for(int j = 0 ; j < n - i - 1; j++ )
        //     {
        //         if(s[j] == '1' && s[j+1] == '0')
        //         {
        //             swap(s[j+1], s[j]);
        //             swapped = true;
        //             count++;
        //         }
        //     }
        //     if(!swapped)
        //     {
        //         break;
        //     }

        // }
        return count;
    }
};