const swapVal = (a, b) => {
  // 17, 8
  console.log("<< Before swapping >>");
  console.log("num 1 : ", a);
  console.log("num 2 : ", b);
  a = a + b; // 25
  b = a - b; // 17
  a = a - b; // 8

  console.log("<< after swapping >>");
  console.log("num 1 : ", a);
  console.log("num 2 : ", b);
};

while (true) {
  let num1 = prompt("Enter first number ", "");
  let num2 = prompt("Enter second number", "");

  if (isNaN(Number(num1)) || isNaN(Number(num2))) {
    alert("Invalid Number");
    break;
  } else {
    swapVal(num1, num2);
  }
}
