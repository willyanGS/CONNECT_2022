const div3 = document.getElementById('div3');
const botao3 = document.getElementById("botao3");

botao3.addEventListener('click', mostrarIdososFiltrados);

function mostrarIdososFiltrados () {
    const elemento3 = document.createElement('elemento3');
    idososFiltrados = idosos.filter( (idoso) => {
        return (idoso.idade > 60);
    });
    elemento3.innerHTML = stringIdosos(idososFiltrados);
    div3.appendChild(elemento3);
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
