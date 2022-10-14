confirm("TABUADA DE UM NUMERO");

var num = parseInt(prompt("Digite um numero inteiro:"));
var resultado = "";

for (let i=0; i<=10; i++) {
    resultado += (`${num} x ${i} = ${(num*i)}\n`);
}

alert(resultado);