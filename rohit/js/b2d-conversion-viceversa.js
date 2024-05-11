function B2D(binNumber) {
  let bn = binNumber;
  let res = 0;
  let itr = 0;

  while (bn > 0) {
    let last_digit = bn % 10;
    bn = parseInt(bn / 10);

    if (last_digit !== 0 && last_digit !== 1) {
      return "Invalid Binary Number";
    }

    res += last_digit * 2 ** itr;

    itr++;
  }

  return res;
}

function D2B(decNumber) {
  // 9
  let dn = decNumber;
  let res = 0;
  let fact = 1;

  while (dn > 0) {
    rem = dn % 2;
    res += rem * itr; //1
    dn = parseInt(dn / 2); ///4
    fact *= 10;
  }

  return res;
}

console.log(B2D(1001));
console.log(D2B(26));
