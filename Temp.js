var findDuplicate = function (nums) {
  let Result = 0;
  nums.forEach((element, index) => {
    for (let j = index + 1; j < nums.length; j++) {
      if (element === nums[j]) {
        Result = element;
        return element;
      }
    }
  });
  return Result;
};
console.log(findDuplicate([1, 3, 4, 2, 2]));
