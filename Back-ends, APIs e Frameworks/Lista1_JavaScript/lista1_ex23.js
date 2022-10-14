var dataAtual = (prompt("Informe a data atual (DD/MM/AAAA):"));
var dataNasc = (prompt("Informe a data de nascimento (DD/MM/AAAA):"));

var dataAtuaVetor = dataAtual.split("/");
var dataNascVetor = dataNasc.split("/");

let dias = (dataAtuaVetor[0]-dataNascVetor[0]);
let mesesDias = ((dataAtuaVetor[1]-dataNascVetor[1])*30);
let anosDias = ((dataAtuaVetor[2]-dataNascVetor[2])*365);

let diasIdade = parseInt(dias+mesesDias+anosDias);
let semanasIdade = parseInt(diasIdade/7);
let mesesIdade = parseInt(diasIdade/30);
let anosIdade = parseInt(diasIdade/365);

alert(`Voce tem aproximadamente: ${(anosIdade)} anos, ou ${mesesIdade} meses, ou ${semanasIdade} semanas, ou ${diasIdade} dias de vida`);