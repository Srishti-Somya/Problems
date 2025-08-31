class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftscore = 0, rightscore = 0, maxscore = 0, rightidx = n - 1;
        for(int i = 0 ; i < k ; i++ ){
            leftscore += cardPoints[i];
        }
        maxscore = leftscore;
        for(int i = k - 1; i >= 0 ; i-- ){
            leftscore -= cardPoints[i];
            rightscore += cardPoints[rightidx];
            rightidx--;
            maxscore = max(maxscore, leftscore + rightscore);
        }
        return maxscore;
    }
};