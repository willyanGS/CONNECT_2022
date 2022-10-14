var salarioMin = parseFloat(prompt("Informe o salario minimo atual (R$):"));
var salarioFunc = parseFloat(prompt("Informe o salario do funcionario (R$):"));

var salarioProporc = (salarioFunc/salarioMin);

alert(`O funcionario recebe o equivalente a ${(salarioProporc).toFixed(2)} salarios minimos`);