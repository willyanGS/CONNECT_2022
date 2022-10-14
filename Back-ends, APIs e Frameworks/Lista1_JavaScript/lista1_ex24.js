var conta1 = 200.00;
var conta2 = 120.00;
var salario = 1200.00;

let salarioRestante = (salario - ((conta1+conta2)*1.02)).toFixed(2);

alert(`Joao, restara R$ ${salarioRestante} do seu salario`);