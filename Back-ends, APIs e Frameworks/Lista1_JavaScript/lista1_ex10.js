var diam = parseFloat(prompt("Digite as dimensoes da caixa dagua:\n\nDIAMETRO (m) = "));
var alt = parseFloat(prompt("Digite as dimensoes da caixa dagua:\n\nALTURA (m) = "));

var volume = ((((diam*diam)/4)*3.1415)*alt).toFixed(2);

alert(`VOLUME = ${volume} m3 ou ${volume*1000} L`);