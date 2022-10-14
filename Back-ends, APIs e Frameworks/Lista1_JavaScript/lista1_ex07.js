var cent = [];

cent[1] = 0;
cent[5] = 0;
cent[10] = 0;
cent[25] = 0;
cent[50] = 0;
cent[100] = 0;

confirm("Digite o total de moedas");

function totalMoedas(qtd, valor) {
    cent[valor] = parseInt(prompt("Moedas de " + valor + " centavos ="))
};

cent.forEach(totalMoedas);

var total = 0.0;
function totalReais(qtd, valor) {
    total += parseFloat((cent[valor] * valor)/100)
};
cent.forEach(totalReais);

alert(`Voce poupou R$ ${total.toFixed(2)}`);
