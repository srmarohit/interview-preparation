function findHCF(a, b) {
  let hc = 1;
  for (let itr = 2; itr <= (a && b); itr++) {
    if (a % itr == 0 && b % itr == 0) {
      hc = itr;
    }
  }

  return hc;
}

console.log("LCM of 45,60 = " + findHCF(45, 60));

function findLCM(a, b) {
  let lc = (a * b) / findHCF(a, b);

  return lc;
}

console.log("LCM of 10,45 = " + findLCM(10, 45));

// find HCF by using Euclidean's Law
function getHCF(a, b) {
  if (b == 0) {
    return a;
  }
  return getHCF(b, a % b);
}

// get HCF of two numbers
console.log("HCF of 30,45 = " + getHCF(30, 45));

// get HCF of three numbers
console.log("HCF of 30,45,60 = " + getHCF(getHCF(30, 45), 60));

// get LCM of three numbers
console.log("LCM of 30,40,60 = " + findLCM(findLCM(30, 40), 60));
