var botao = document.getElementById("botao");
botao.addEventListener("click", exibirNome);


var paragrafo = document.getElementById("paragrafo");

function exibirNome() {
    var nome = prompt("Digite seu nome:");
    paragrafo.innerText = (`Tenha um bom dia, Sr./Sra. ${nome}`);
}