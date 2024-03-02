function getCountOfLetters(str) {
  if (!str) {
    // check if string is missing
    console.log("String is missing.");
    return null;
  }

  let letters = {}; // create an Object to stor the letter as a key and and their count as a value

  for (let ch of str) {
    // iterate the given string
    if (!letters[ch]) {
      letters[ch] = 1;
    } else {
      letters[ch] += 1;
    }
  }

  return letters;
}

while (true) {
  let word = prompt("enter word ", "");
  if (!word) {
    break;
  }
  let result = getCountOfLetters(word);
  console.log(result);
}
