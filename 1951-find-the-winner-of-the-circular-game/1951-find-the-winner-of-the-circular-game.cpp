class Solution {
public:
    int findTheWinner(int n, int k) {
        // int count = n;
        int jump = 0;
        vector<int> arr;
        for(int i = 0 ; i < n ; i++ )
        {
            arr.push_back(i+1);
        }
        k--;
        while(arr.size() > 1)
        {
            int remove = (jump + k) % arr.size();
            arr.erase(arr.begin() + remove);
            jump = remove;
            // int last = arr.size();
            // swap(jump, arr[last-1]);
            // arr.pop_back();
            // sort(arr.begin(), arr.end());
            // count--;
        }
        // cout<<endl;
        // for(int i = 0; i <arr.size() ; i++ )
        // {
        //     cout<< arr[i] << " ";
        // }
        return arr[0];
    }
};