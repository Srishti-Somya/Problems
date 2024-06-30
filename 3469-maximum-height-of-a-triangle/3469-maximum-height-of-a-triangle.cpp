class Solution {
public:
    int height_if_at_Top(int current, int red, int blue)
    {
        int i = 1;
        int colorHeight = 0;
        while( red || blue )
        {
            if(current == 1)
            {
                if(blue >= i)
                {
                    blue -= i;
                    colorHeight++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(red >= i)
                {
                    red -= i;
                    colorHeight++;
                }
                else
                {
                    break;
                }
            }
            i++;
            current = 1 - current;
        }
        return colorHeight;
    }
    int maxHeightOfTriangle(int red, int blue) {
        int blueHeight = height_if_at_Top(1, red, blue);
        int redHeight = height_if_at_Top(0, red, blue);
        int ans = max(blueHeight, redHeight);
        return ans;

        // int sumOfAll = red + blue;
        // int i = 0;
        // int n = 0;
        // while(sumOfAll > n)
        // {
        //     i++;
        //     n += i;
        // }
        // int ans = 0;
        // int current;
        // int maxi = max(red, blue);
        // if(maxi == red)
        // {
        //     current = 0;
        // }
        // else
        // {
        //     current = 1;
        // }

        // while(red || blue)
        // {
        //     ans++;
        //     if(current == 0)
        //     {
        //         if(red >= i)
        //         {
        //             red -= i;
        //         }
        //         else
        //         {
        //             break;
        //         }
        //     }
        //     else
        //     {
        //         if(blue >= i)
        //         {
        //             blue -= i;
        //         }
        //         else
        //         {
        //             break;
        //         }
        //     }
        //     // n -= i;
        //     i--;
        //     current = 1 - current;
        // }
        // return ans;
    }
};