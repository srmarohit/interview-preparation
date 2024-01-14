/**
 * WAP to check number is whether it's prime or not
 * @param {*} number
 * @returns
 */
function checkPrimeNumber(number) {
  let status = 1;
  if (number < 1) {
    status = -1;
  } else if (number > 0 && number < 4) {
    status = 1;
  } else {
    for (let i = 2; i < number; i++) {
      if (number % i === 0) {
        status = 0; // actually number is not a prime
        break;
      }
    }
  }

  return status;
}

const status = checkPrimeNumber(1011);
switch (status) {
  case -1:
    alert("Invalid Number: Kindly send Positive integer number !");
    break;
  case 0:
    alert("It's not a prime number");
    break;
  case 1:
    alert("It's a prime number");
    break;

  default:
    alert("Something went wrong");
}
