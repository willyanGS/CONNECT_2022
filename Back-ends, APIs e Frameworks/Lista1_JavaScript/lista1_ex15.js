var salario = parseFloat(prompt("Informe o salario fixo do funcionario (R$):"));
var vendas = parseFloat(prompt("Informe o valor total das suas vendas (R$):"));
var comissao = (vendas * (4/100.0));

alert(`O funcionario recebeu R$ ${(comissao).toFixed(2)} de comissao, totalizando um salario de R$ ${(salario+comissao).toFixed(2)}`);