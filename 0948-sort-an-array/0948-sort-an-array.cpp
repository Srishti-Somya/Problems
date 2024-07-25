class Solution {
public:
    void mergeSort(vector<int>& nums, int left, int right)
    {
        if(left >= right)
        {
            return;
        }
        int midi = left + (right - left)/2;
        mergeSort(nums, left, midi);
        mergeSort(nums, midi + 1 , right);
        merge(nums, left, midi, right);
        return;
    }
    void merge(vector<int>& nums, int left, int mid, int right)
    {
        int l = left;
        int r = mid + 1;
        vector<int> temp;
        while(l <= mid && r <= right)
        {
            if(nums[l] < nums[r])
            {
                temp.push_back(nums[l]);
                l++;
            }
            else
            {
                temp.push_back(nums[r]);
                r++;
            }
        }
        while( l <= mid )
        {
            temp.push_back(nums[l]);
            l++;
        }
        while( r <= right )
        {
            temp.push_back(nums[r]);
            r++;
        }
        for( int i = left ; i <= right ; i++ )
        {
            nums[i] = temp[i - left];
        }
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        // int left = low + 1;
        // int right = high;
        // vector<int> temp;
        mergeSort(nums, low, high);
        return nums;    
    }
};