const div2 = document.getElementById('div2');
const botao2 = document.getElementById("botao2");

botao2.addEventListener('click', mostrarIdosos);

function mostrarIdosos () {
    const elemento2 = document.createElement('elemento2');
    elemento2.innerHTML = stringIdosos(idosos);
    div2.appendChild(elemento2);
};

function stringIdosos (idosos) {
    var stringIdoso = '';
    idosos.map( (idoso) => {
        stringIdoso += `<br>* O idoso de nome ${idoso.nome} está com ${idoso.idade} e ele ${vivoMorto(idoso.vivo)}!`;
    });
    return stringIdoso;
}

function vivoMorto(vivo){
    if (vivo == true)
        return "está vivo";
    return "já faleceu";
};
