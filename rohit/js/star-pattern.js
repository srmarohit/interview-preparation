function printLeftInclineRightAngleStar(ln) {
  for (let row = 1; row <= ln; row++) {
    let star = "";
    for (let col = 0; col < row; col++) {
      star += "*";
    }
    console.log(star);
  }
}

function printRightInclineStarPattern(line) {
  for (let row = 1; row <= line; row++) {
    let star = "";
    for (let col = 0; col < line; col++) {
      if (5 - row > col) {
        star += "-";
      } else {
        star += "*";
      }
    }

    console.log(star);
  }
}

function printReverseLeftInclineStarPattern(line) {
  for (let row = 1; row <= line; row++) {
    let star = "";
    for (let col = 0; col < line; col++) {
      if (5 - row < col) {
        star += "-";
      } else {
        star += "*";
      }
    }

    console.log(star);
  }
}

function printReverseRighttInclineRightAngleStar(ln) {
  for (let row = 0; row < ln; row++) {
    let star = "";
    for (let col = 0; col < ln; col++) {
      if (col >= row) {
        star += "*";
      } else {
        star += "-";
      }
    }
    console.log(star);
  }
}

function printStarPattern(line) {
  printLeftInclineRightAngleStar(line);
  printReverseLeftInclineStarPattern(line);
  printRightInclineStarPattern(line);
  printReverseRighttInclineRightAngleStar(line);
}

let line = prompt("enter line to print star pattern ", "");

printStarPattern(line);
