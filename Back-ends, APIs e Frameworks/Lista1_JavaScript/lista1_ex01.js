var qtdSanduiche = parseInt(prompt("Quantidade de sanduiches a serem feitos?"));

var qtdPresunto = (qtdSanduiche * 1 * 0.05);
var qtdQueijo = (qtdPresunto * 2);
var qtdHamburguer = (qtdSanduiche * 0.1);

alert("COMPRAR:\n* "+qtdQueijo.toFixed(2)+" kg de queijo\n* "+qtdPresunto.toFixed(2)+" kg de presunto\n* "+qtdHamburguer.toFixed(2)+" kg de carne");
