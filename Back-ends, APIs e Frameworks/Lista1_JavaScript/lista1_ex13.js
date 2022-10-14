confirm("MEDIA PONDERADA DE 2 NOTAS");

var nota1 = parseFloat(prompt("Digite a Nota 1:"));
var nota2 = parseFloat(prompt("Digite a Nota 2:"));

result = ((nota1*2+nota2*3)/(2+3));

alert(`MEDIA FINAL = ${result.toFixed(2)}`);