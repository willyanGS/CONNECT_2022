confirm("** TRIANGULO RETANGULO **");

var cat1 = parseFloat(prompt("Digite o valor do cateto 1:"));
var cat2 = parseFloat(prompt("Digite o valor do cateto 2:"));

let hipoten = Math.sqrt((cat1*cat1)+(cat2*cat2)).toFixed(2);

alert(`Hipotenusa = ${hipoten} u.m.`);