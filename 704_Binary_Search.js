/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
function BinarySearch(low, high, nums, target) {
  if (low <= high) {
    let mid = parseInt((low + high) / 2);
    if (nums[mid] > target) {
      return BinarySearch(low, mid - 1, nums, target);
    } else if (nums[mid] == target) {
      return mid;
    } else {
      return BinarySearch(mid + 1, high, nums, target);
    }
  }
  return -1;
}
var search = function (nums, target) {
  return BinarySearch(0, nums.length, nums, target);
};
console.log(search([5], 5));
