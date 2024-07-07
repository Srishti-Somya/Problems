class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drankBottles = 0;
        int emptyBottles = 0;
        while(numBottles)
        {
            if(emptyBottles >= numExchange)
            {
                numBottles++;
                emptyBottles -= numExchange;

            }
            numBottles--;
            drankBottles++;
            emptyBottles++;
        }
        if(emptyBottles >= numExchange)
        {
            numBottles++;
            emptyBottles -= numExchange;
        }
        drankBottles += numBottles;

        return drankBottles;
    }
};