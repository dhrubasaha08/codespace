const prompt = require("prompt-sync")();

let n;
let i;
let flag = 0;

n = prompt("Enter number :");

if (n == 0 || n == 1) {
  flag = 1;
}

for (i = 2; i <= n / 2; ++i) {
  if (n % i == 0) {
    flag = 1;
    break;
  }
}

if (flag == 0) {
  console.log(`Given number ${n} is a prime number`);
} else {
  console.log(`Given number ${n} is a non-prime number`);
}
