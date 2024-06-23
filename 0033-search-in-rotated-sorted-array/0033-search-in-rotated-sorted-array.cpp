class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while( low <= high )
        {
            mid = low + (high - low ) / 2;
            if(nums[mid] == target )
            {
                return mid;
            }

            if( nums[low] <= nums[mid] )
            {
                if( target >= nums[low] && target <= nums[mid] )
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if( target >= nums[mid] && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
        
        // int n = nums.size();
        // int left = 0;
        // int right = n-1;
        // // if(nums[0] == target)
        // // {
        // //     return 0;
        // // }
        // // if(nums[n-1] == target)
        // // {
        // //     return n-1;
        // // }
        // while(left <= right)
        // {
        //     int mid = left + (right-left)/2;
        //     if(nums[mid] == target)
        //     {
        //         return mid;
        //     }
        //     else if(nums[left] <= nums[mid])
        //     {
        //         // if(target < nums[left])
        //         // {
        //         //     left = mid + 1;
        //         // }
        //         // else 
        //         if(target >= nums[left] && target < nums[mid])
        //         {
        //             right = mid - 1;
        //         } 
        //         else
        //         {
        //             left = mid + 1;
        //         }
        //     }
        //     else
        //     {
        //         // if(target > nums[right])
        //         // {
        //         //     right = mid - 1;
        //         // }
        //         // else 
        //         if(target <= nums[right] && target > nums[mid])
        //         {
        //             left = mid + 1;
        //         }
        //         else
        //         {
        //             right = mid -1;
        //         }
        //     }
        // }
        // return -1;
    }
};