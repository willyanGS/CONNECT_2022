var cantina = {
    pedidos: [],
    caixa: 0.0
};

function iniciarCantina(cantina) {

    var option;

    do {
        switch (option = parseInt(prompt(`*** CANTINA TIO BILLY ***
-------------------------------
1 - Fazer pedido
2 - Controle de caixa
-------------------------------
0 - Sair`))) {
            case 1:
                fazerPedido(cantina);
                break;
            case 2:
                caixaCantina(cantina);
                break;
            case 0:
                break;
            default:
                alert("Opcao Invalida!");
        };
    } while (option!=0 || !confirm("Sair?"));

};

function produtosVenda() {
    var produto, valorUn, custoUn;
    var opc = parseInt(prompt("*** CARDAPIO TIO BILLY ***\n\n"+      
                                "1 - Cachorro-Quente > (R$ 8,00/un)(Combo*2un = R$ 15,00)\n"+
                                "2 - Misto-Quente > (R$ 7,00/un)(Combo*2un = R$ 13,00)\n"+
                                "3 - Refrigerante Lata > (R$ 4,50/un)(Combo*2un = R$ 8,50)"));
    switch (opc){
        case 1:
            produto = "Cachorro-Quente";
            custoUn = 4.5;
            var qtd = parseInt(prompt("MENU >>> Cachorro-Quente\n\n1un = R$ 8,00\n+2un(**Combo**) = R$ 7,50/un\n\nQuantidade?"));
            (qtd<2) ? valorUn=8.0 : valorUn=7.5;
            break;
        case 2:
            produto = "Misto-Quente";
            custoUn = 4.0;
            var qtd = parseInt(prompt("MENU >>> Misto-Quente\n\n1un = R$ 7,00\n+2un(**Combo**) = R$ 6,50/un\n\nQuantidade?"));
            (qtd<2) ? valorUn=7.0 : valorUn=6.5;
            break;
        case 3:
            produto = "Refrigerante Lata";
            custoUn = 2.0;
            var qtd = parseInt(prompt("MENU >>> Refrigerante Lata\n\n1un = R$ 4,50\n+2un(**Combo**) = R$ 4,25/un\n\nQuantidade?"));
            (qtd<2) ? valorUn=4.5 : valorUn=4.25;
            break;
        default:
            alert("Opcao Invalida!");
    };
    if ((opc==1 || opc==2 || opc==3) && qtd>=1) {
        var pedido = {produto, qtd, valorUn, custoUn};
        return pedido;
    }
    return null;
}

function fazerPedido(cantina) {
    var pedido = produtosVenda();
    if (pedido!=null) {
        cantina.pedidos.push(pedido);
        return atualizarCaixa(cantina, pedido);
    }
}

function atualizarCaixa(cantina, item) {
    cantina.caixa += (item.qtd * item.valorUn);
};

function caixaCantina(cantina) {
    if (confirm(`*** CONTROLE DE CAIXA TIO BILLY ***
----------------------------------------
Total de pedidos = ${cantina.pedidos.length}
----------------------------------------
ENTRADAS TOTAL = R$ ${cantina.caixa.toFixed(2)}
CUSTO TOTAL = R$ ${gastosCantina(cantina).toFixed(2)}
SALDO DIARIO = R$ ${(saldoCantina(cantina).toFixed(2))}
----------------------------------------
Ver registro individuais dos pedidos?`)) {
    alert(logsPedidos(cantina));
    };
    return cantina.caixa;
};

function logsPedidos(cantina) {
    var logs = "";
    let contCQ = 0, contMQ = 0, contRL = 0;
    cantina.pedidos.map((item,index) => {
        logs += (`Pedido ${index+1} = ${item.produto} / Qtd = ${item.qtd} / Valor total = R$ ${(item.qtd*item.valorUn).toFixed(2)}\n`)
        if (item.produto == "Cachorro-Quente")
            contCQ += item.qtd;
        else if (item.produto == "Misto-Quente")
            contMQ += item.qtd;
        else if (item.produto == "Refrigerante Lata")
            contRL += item.qtd;
    });

    logs += ("---------------------------\n"+
                "Quantidades totais:\n"+
                " - Cachorro-Quente = "+contCQ+" unidades\n"+
                " - Misto-Quente = "+contMQ+" unidades\n"+
                " - Refrigerante Lata = "+contRL+" unidades\n");

    return logs; 
};

function gastosCantina(cantina) {
    var gastos = 0.0;
    cantina.pedidos.forEach(item => {
        gastos += (item.custoUn*item.qtd);
    });
    return gastos;
}

function saldoCantina(cantina) {
    return parseFloat(cantina.caixa - gastosCantina(cantina));
}

iniciarCantina(cantina);