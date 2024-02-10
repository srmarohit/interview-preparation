// first approach - easy approach...
function isPalindromeUsingMethods(str) {
  if (str === [...str].reverse().join("")) {
    return true;
  } else {
    return false;
  }
}

console.log(isPalindromeUsingMethods("malayalam"));

// second approach
function isPalindrome(str) {
  let strArr = str.split("");
  let counter = strArr.length - 1;
  let i = 0;
  while (counter != i) {
    if (strArr[counter] !== strArr[i]) {
      return false;
    }
    i++;
    counter--;
  }

  return true;
}

do {
  let resp = prompt("Enter the word", "madam");
  if (resp) {
    alert(isPalindrome(resp));
  } else {
    alert("thank you !");
    break;
  }
} while (1);
