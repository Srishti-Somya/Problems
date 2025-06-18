/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    sum_all = init;
    for(let i = 0 ; i < nums.length ; i++ ){
        sum_all = fn(sum_all, nums[i])
    }
    return sum_all;
};