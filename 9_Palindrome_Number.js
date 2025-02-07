/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  if (x < 0) {
    return false;
  }
  let temp = x;
  let Result = 0;
  while (temp != 0) {
    //   console.log(temp % 10);
    Result += temp % 10;

    temp = parseInt(temp / 10);
    temp != 0 ? (Result *= 10) : (Result *= 1);
  }
  if (Result === x) {
    return true;
  } else {
    return false;
  }
};
console.log(isPalindrome(121));
