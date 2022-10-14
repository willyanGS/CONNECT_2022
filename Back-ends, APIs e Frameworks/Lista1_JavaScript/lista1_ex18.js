var baseMaior = parseFloat(prompt("Digite tamanho da base maior do trapezio:"));
var baseMenor = parseFloat(prompt("Digite tamanho da base menor  do trapezio:"));
var altura = parseFloat(prompt("Digite tamanho da altura  do trapezio:"));

var areaTrapezio = (((baseMaior+baseMenor)*altura)/2);

alert(`AREA DO TRAPEZIO = ${areaTrapezio.toFixed(2)} u.m.\u00B2`);