class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int target = INT_MAX;

        while( low <= high )
        {
            mid = low + ( high - low ) / 2;
            // if(nums[mid] < target)
            // {
            //     target = nums[mid];
            // }
            if( nums[low] <= nums[mid])
            {
                target = min(target, nums[low]);
                low = mid + 1;
            }
            else
            {
                target = min( target, nums[mid]);
                high = mid - 1;
            }
        }
        return target;

        // int n = nums.size();
        // int left = 0;
        // int right = n-1;
        // int mid;
        
        // while(left <= right)
        // {
        //     mid = left + (right-left)/2;
        //     if(mid == n-1)
        //     {
        //         return nums[mid];
        //     }
        //     else if(mid == 0)
        //     {
        //         if(n == 2)
        //         {
        //             return min(nums[0],nums[1]);
        //         }
        //         return nums[0];
        //     }
        //     if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1])
        //     {
        //         return nums[mid];
        //     }
        //     else
        //     {
        //         if(nums[mid-1]>nums[mid+1])
        //         {
        //             left = mid+1;
        //         }
        //         else
        //         {
        //             right = mid-1;
        //         }
        //     }
        // }
        // return nums[mid];
        // int n = nums.size();
		// int left = 0;
		// int right = n - 1;
		// int mid = 0;
		// int target = INT_MAX;
		// while (left <= right) {
		// 	mid = (left + right) / 2;
		// 	if (nums[mid] < target) {
		// 		target = nums[mid];
		// 	} else if (nums[left] < nums[mid]) {
		// 		// left is sorted
		// 		if(nums[mid] < nums[right])
		// 			right = mid - 1;
		// 		else
		// 			left = mid + 1;
		// 	} else {
		// 		if(nums[mid] < nums[right])
		// 			right = mid - 1;
		// 		else
		// 			left = mid + 1;
		// 	}
		// }
		// return target;
    }
};