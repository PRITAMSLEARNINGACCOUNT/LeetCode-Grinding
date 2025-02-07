var reverse = function (x) {
  let Result = 0;
  let temp = x;
  while (temp != 0) {
    Result += temp % 10;

    temp = parseInt(temp / 10);
    temp != 0 ? (Result *= 10) : (Result *= 1);
  }
  if (Result > Math.pow(2, 31) - 1 || Result < -Math.pow(2, 31)) {
    return 0;
  }
  return Result;
};

console.log(reverse(123));
