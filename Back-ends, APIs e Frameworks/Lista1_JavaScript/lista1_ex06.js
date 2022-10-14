var numLata = parseInt(prompt("Digite o numero comprado\nLATA 350 mL = "));

var num600 = parseInt(prompt("Digite o numero comprado\nGARRAFA 600 mL = "));

var num2L = parseInt(prompt("Digite o numero comprado\nGARRAFA 2 L = "));

var volumeTotal = ((numLata*0.35) + (num600*0.6) + (num2L*2));
    
alert(`O volume total de refrigerante Meia-Cola comprado foi ${volumeTotal} L`);