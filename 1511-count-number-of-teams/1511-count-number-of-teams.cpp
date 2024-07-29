class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans = 0;
        int n = rating.size();

        for (int i = 1; i < n - 1; ++i) {
            int key = rating[i];
            int lcount = 0, rcount = 0;

            for (int j = 0; j < i; ++j) {
                if (rating[j] < key) {
                    ++lcount;
                }
            }

            for (int k = i + 1; k < n; ++k) {
                if (rating[k] > key) {
                    ++rcount;
                }
            }

            ans += (lcount * rcount);
        }

        for (int i = 1; i < n - 1; ++i) {
            int key = rating[i];
            int lcount = 0, rcount = 0;

            for (int j = 0; j < i; ++j) {
                if (rating[j] > key) {
                    ++lcount;
                }
            }

            for (int k = i + 1; k < n; ++k) {
                if (rating[k] < key) {
                    ++rcount;
                }
            }

            ans += (lcount * rcount);
        }

        return ans;
    }
};