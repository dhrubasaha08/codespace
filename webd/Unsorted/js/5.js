const prompt = require('prompt-sync')();

let c, f;

c = prompt('Enter temperature in Celsius : ');
f = c * 1.8 + 32;
console.log(`${c} degree Celsius = ${f} degree Fahrenheit`);