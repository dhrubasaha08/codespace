const prompt = require('prompt-sync')();

let meter, foot;

meter = prompt('Enter length in meter : ');
foot  = (meter/0.3048).toFixed(2)
console.log(`${meter} Meter = ${foot} Foot`);

