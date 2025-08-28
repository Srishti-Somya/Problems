/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int binarySearchf(int st, int end, int &target, MountainArray &mountainArr){
        while(st <= end){
            int mid = st + (end - st)/2;
            int val = mountainArr.get(mid);
            if(val == target){
                return mid;
            }else if(val > target){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return -1;
    }
    int binarySearchb(int st, int end, int &target, MountainArray &mountainArr){
        while(st <= end){
            int mid = st + (end - st)/2;
            int val = mountainArr.get(mid);
            if(val == target){
                return mid;
            }else if(val > target){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak;
        int n = mountainArr.length();
        int st = 1, end = n - 2;
        while(st <= end){
            int mid = st + (end - st)/2;
            int val = mountainArr.get(mid);
            int val1 = mountainArr.get(mid - 1);
            int val2 = mountainArr.get(mid + 1);
            if(val > val1 && val > val2) {
                peak = mid;
                break;
            }else if(val1 > val ){ end = mid - 1;}
            else st = mid + 1;
        }
        int idx1 = binarySearchf(0, peak, target, mountainArr);
        if(idx1 != -1){return idx1;}
        int idx2 = binarySearchb(peak, n - 1, target, mountainArr);
        // return idx1? idx1 != -1 : idx2;
        return idx2;
    }
};