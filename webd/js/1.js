const prompt = require("prompt-sync")();

let a = 0;
let b = 1;
const x = prompt("Enter range:");

for (let i = 0; i < x; i++) {
  console.log(a);
  temp = a + b;
  a = b;
  b = temp;
}
