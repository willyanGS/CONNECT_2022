var litrosRefresco = parseFloat(prompt("Quantos litros de refresco voce quer preparar?"));

var litrosAgua = (0.8*litrosRefresco);
var litrosMaracuja = (0.2*litrosRefresco);

alert(`Voce vai precisar de ${litrosAgua} L de agua mineral e ${litrosMaracuja} L de suco de maracuja.`);