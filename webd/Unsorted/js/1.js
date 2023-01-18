const prompt = require('prompt-sync')();

let a = 0;
let b = 1;
let x = prompt('Enter range:');

for (let i = 0; i < x; i++) {
    console.log(a);
    temp = a + b;
    a = b;
    b = temp;
}