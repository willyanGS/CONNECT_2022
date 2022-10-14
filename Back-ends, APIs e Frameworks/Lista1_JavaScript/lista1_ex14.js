var precoAtual = parseFloat(prompt("Digite o preco atual do produto (R$):"));
var precoDesconto = (precoAtual * ((100.0-10)/100));

alert(`Preco do produto com 10% de desconto = R$ ${precoDesconto.toFixed(2)}`);