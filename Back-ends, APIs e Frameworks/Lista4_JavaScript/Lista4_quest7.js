const elemento2 = document.createElement('elemento2');

elemento2.innerHTML = `<br>* O idoso de nome ${idosos[7].nome} está com ${idosos[7].idade} e ele ${vivoMorto(idosos[7].vivo)}!`;
div1.appendChild(elemento2);

function vivoMorto(vivo){
    if (vivo == true)
        return "está vivo";
    return "já faleceu";
};
