function addMatrices(mat1, mat2) {
  if (mat1.flat().length !== mat2.flat().length) {
    alert("invalid matrices..");
    return;
  } else {
    const result = [];
    let rowLength = mat1.length;

    for (let row = 0; row < rowLength; row++) {
      if (mat1[row].length !== mat2[row].length) {
        alert("invalid Matrices..");
        return;
      } else {
        const resultRow = [];
        let colLength = mat1[row].length;
        for (let col = 0; col < colLength; col++) {
          resultRow.push(Number(mat1[row][col]) + Number(mat2[row][col]));
        }
        result.push(resultRow);
      }
    }

    return result;
  }
}

const mat1 = [
  [1, 2],
  [3, 1],
];
const mat2 = [
  [2, 3],
  [4, 2],
];

const result = addMatrices(mat1, mat2);
console.log(result);
