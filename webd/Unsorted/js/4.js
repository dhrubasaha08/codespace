const prompt = require('prompt-sync')();

let a, b, c, root1, root2, discriminant, real, img;

a = prompt('Enter A :');
b = prompt('Enter B :');
c = prompt('Enter C :');

discriminant = b * b - 4 * a * c;

if (discriminant > 0) {
    root1 = (-b + Math.sqrt(discriminant)) / 2 * a;
    root2 = (-b - Math.sqrt(discriminant)) / 2 * a;
    console.log(`Root of the quadratic equation are ${root1} and ${root2}.`);
} else if (discriminant == 0) {
    root1 = root2 = (-b / 2 * a);
    console.log(`Root of the quadratic equation are ${root1} and ${root2}.`);
} else {
    real = (-b / (2 * a)).toFixed(2);
    img = (Math.sqrt(-discriminant) / (2 * a)).toFixed(2);
    console.log(`Root of the quadratic equation are ${real} + ${img}i and ${real} - ${img}i.`);
}