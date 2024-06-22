class Solution {
public:
    int lower(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int ans = nums.size();
        while( low <= high )
        {
            mid = low + (high - low ) / 2;
            if(nums[mid] >= target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    int upper(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int ans = nums.size();
        while( low <= high )
        {
            mid = low + (high - low ) / 2;
            if(nums[mid] > target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

    int first(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int ans = -1;
        while( low <= high)
        {
            mid = low + ( high - low ) / 2;
            if(nums[mid] == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }

    int last(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int ans = -1;
        while( low <= high)
        {
            mid = low + ( high - low ) / 2;
            if(nums[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if( nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // int n = nums.size();
        // int ub;
        // int lb = lower(nums, target);
        // if(lb == n || nums[lb] != target )
        // {
        //     return {-1, -1};
        // }
        // else
        // {
        //     ub = upper(nums, target);
        // }
        // return {lb, ub - 1};
        int n = nums.size();
        int firs = first(nums, target);
        int las;
        if(firs == n  )
        {
            return {-1,-1};
        }
        else
        {
            las = last(nums, target);
        }
        return {firs, las};
    }
};