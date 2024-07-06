class Solution {
public:
    int passThePillow(int n, int time) {
        // time = time%n;
        bool last = false;
        int count = 1;
        while(time)
        {
            if(count == n)
            {
                last = true;
            }
            if(count == 1)
            {
                last = false;
            }
            if(!last)
            {
                count++;
            }
            else
            {
                count--;
            }
            // count++;

            time--;
        }
        return count;
    }
};