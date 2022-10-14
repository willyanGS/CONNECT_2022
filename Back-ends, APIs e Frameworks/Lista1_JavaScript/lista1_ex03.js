var turno = parseFloat(prompt("Turno diario do funcionario (h):"));
var diasTrab = parseInt(prompt("Dias de expediente no mes (d):"));
var totalHorasTrab = parseFloat(prompt("Total de horas de trabalho do funcionario no mes (h):"));

var totalHoras = (turno*diasTrab); // Quanto deveria ter trabalhado
var horaExtra, salarioBruto, salarioLiquido;

if (totalHorasTrab > totalHoras) {
    horaExtra = (totalHorasTrab - totalHoras);
    salarioBruto = ((horaExtra*15.00) + (totalHoras*10.00));
    salarioLiquido = (salarioBruto * 0.9);
} else {
    salarioBruto = (totalHorasTrab*10.00);
    salarioLiquido = (salarioBruto * 0.9);
}

alert(`Salario do funcionario:\nBRUTO = R$${salarioBruto}\nLIQUIDO = R$${salarioLiquido}`);