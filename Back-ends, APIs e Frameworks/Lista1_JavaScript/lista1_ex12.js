confirm("DIVISAO DE 2 NUMEROS");

var num1 = parseFloat(prompt("Digite o numerador:"));
var num2 = parseFloat(prompt("Digite o denominador(diferente de 0):"));

result = (num1/num2);

alert(`Resultado da divisao = ${result.toFixed(2)}`);