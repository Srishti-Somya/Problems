class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int count = 0;
        for( int i = 0 ; i < n ; i++ )
        {
            for(int j = i+1 ; j < n ; j++ )
            {
                for( int k = j+1 ; k < n ; k++ )
                {
                    int s1 = abs(arr[i] - arr[j]);
                    int s2 = abs(arr[j] - arr[k]);
                    int s3 = abs(arr[k] - arr[i]);
                    if(s1 <= a && s2 <= b && s3 <= c)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};