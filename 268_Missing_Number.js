var missingNumber = function (nums) {
  let MyConstant = 0;
  let flag = false;
  while (true) {
    for (let index = 0; index < nums.length; index++) {
      const element = nums[index];
      if (element === MyConstant) {
        MyConstant++;
        flag = false;
        break;
      }
      flag = true;
    }
    if (flag) {
      return MyConstant;
    }
  }
};
console.log(missingNumber([3, 0, 1]));
