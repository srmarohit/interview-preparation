function findHCF(a, b) {
  let hc = 1;
  for (let itr = 2; itr <= (a && b); itr++) {
    if (a % itr == 0 && b % itr == 0) {
      hc = itr;
    }
  }

  return hc;
}

console.log(findHCF(45, 60));

function findLCM(a, b) {
  let lc = (a * b) / findHCF(a, b);

  return lc;
}

console.log(findLCM(10, 45));
