var countBadPairs = function (nums) {
  let obj = {};
  let count = 0;
  nums.forEach((element, index) => {
    obj[index] = element;
  });
  Object.keys(obj).forEach((element) => {
    let IncreasedElement = parseInt(parseInt(element) + 1);
    console.log(IncreasedElement,element);

    if (IncreasedElement > nums.length) {
      return;
    } else if (
      IncreasedElement - parseInt(element) !==
      obj[IncreasedElement] - obj[element]
    ) {
      count++;
    }
  });
  console.log(count);
};

countBadPairs([4, 1, 3, 3]);
