function isAnagram(str1, str2) {
  if (!str1 || !str2) {
    console.log("Missing string");
    return false;
  }

  let str1_length = str1.length;
  let str2_length = str2.length;

  if (str1_length !== str2_length) {
    console.log("both string have different length.");
    return false;
  }

  let str1_obj = {};
  let str2_obj = {};

  for (let i = 0; i < str1_length; i++) {
    if (!str1_obj[str1[i]]) {
      str1_obj[str1[i]] = 1;
    } else {
      str1_obj[str1[i]] += 1;
    }

    if (!str2_obj[str2[i]]) {
      str2_obj[str2[i]] = 1;
    } else {
      str2_obj[str2[i]] += 1;
    }
  }

  let keys = Object.keys(str1_obj);

  for (let k = 0; k < keys.length; k++) {
    if (str1_obj[keys[k]] !== str2_obj[keys[k]]) {
      return false;
    }
  }

  return true;
}

// below code is for running the application for infinite times untill you pass invalid oe missing word.

do {
  let word_1 = prompt("Enter the first word", "madam");
  let word_2 = prompt("Enter the first word", "madam");
  if (!word_1 || !word_2) {
    alert("Invalid word or missing word");
    break;
  }
  let resp = isAnagram(word_1, word_2);
  if (resp) {
    alert("It's an anagram");
  } else {
    alert("It's not an anagram");
  }
} while (1);
