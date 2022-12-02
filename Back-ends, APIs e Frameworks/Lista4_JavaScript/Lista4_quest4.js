function idososVivos () {
    var idosoVivo =
        idosos.filter( (item) => {
            return item.vivo == true;
        }).map( (item) => {
            return (" " + item.nome);
        });
    return idosoVivo;
};

function idososMortos () {
    var idosoMorto =
        idosos.filter( (item) => {
            return item.vivo == false;
        }).map( (item) => {
            return (" " + item.nome);
        });
    return idosoMorto;
};

function idososJovens () {
    var idosoJovem =
        idosos.filter( (item) => {
            return (item.idade < 60 && item.vivo == true);
        }).map( (item) => {
            return (" " + item.nome);
        });
    return idosoJovem;
};

console.log("Lista4_Questao4");
console.log("R=");

console.log("- Idosos vivos:" + idososVivos());
console.log("- Idosos mortos: " + idososMortos());
console.log("- Idosos jovens: " + idososJovens());
