
var sombraPredio = parseFloat(prompt("Qual o comprimento (m) da sombra do predio?"));

var sombraPessoa = parseFloat(prompt("Qual o comprimento (m) da sua sombra?"));

var alturaPessoa = parseFloat(prompt("Qual a sua altura (m)?"));

var alturaPredio = ((alturaPessoa/sombraPessoa)*sombraPredio);

alert(`Altura do predio = ${alturaPredio} metros.`);
