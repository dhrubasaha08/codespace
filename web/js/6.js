const prompt = require('prompt-sync')();

let c, f;

f = prompt('Enter temperature in Fahrenheit : ');
c = (f - 32) * 5/9;
console.log(`${f} degree Fahrenheit = ${c} degree Celsius`);