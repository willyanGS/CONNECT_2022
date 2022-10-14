var cantina = {
    pedidos: [],
    cont1: 0,
    cont2: 0,
    caixa: 0.0
};

function iniciarCantina(cantina) {

    var option;
    do {
        switch (option = parseInt(prompt(`*** CANTINA TIO BILLY ***
---------------------------
1 - Fazer pedido
2 - Controle de caixa
---------------------------
0 - Sair`))) {
            case 1:
                fazerPedido(cantina);
                break;
            case 2:
                caixaCantina(cantina.cont1, cantina.cont2, cantina.caixa);
                break;
            case 0:
                break;
            default:
                alert("Opcao Invalida");
        };
    } while (option!=0 || !confirm("Sair?"));

};

function fazerPedido(cantina) {
    var pedido = parseInt(prompt("(1 - Simples) >>> 1 Cachorro-Quente = R$ 8,00\n(2 - Combo) >>> 2 Cachorros-Quentes = R$ 15,00"));
    cantina.pedidos.push(pedido);
    return atualizarCaixa(cantina, pedido);
}

function atualizarCaixa(cantina, item) {
    if (item == 1) {
        cantina.caixa += 8.00;
        cantina.cont1++;
    } else if (item == 2) {
        cantina.caixa += 15.00;
        cantina.cont2++;
    }
};

function caixaCantina(cantina) {
    alert(`*** CONTROLE DE CAIXA TIO BILLY ***
-------------------------------------
Total de pedidos = ${cantina.cont1+cantina.cont2}
    (Simples = ${cantina.cont1} pedidos)
    (Combos = ${cantina.cont2} pedidos)
-------------------------------------
TOTAL ENTRADAS R$ ${cantina.caixa}`);
    return cantina.caixa;
};

iniciarCantina(cantina);