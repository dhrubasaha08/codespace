const prompt = require('prompt-sync')();

let x = prompt('Enter the number : ');

if (x % 2 == 0) {
    console.log(`Given number ${x} is a even number`);
} else {
    console.log(`Given number ${x} is a odd number`);
}