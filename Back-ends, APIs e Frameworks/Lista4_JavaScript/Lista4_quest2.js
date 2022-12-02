// a)
console.log("Lista4_Questao2a");
console.log("R=");
idosos.forEach( (item) => {
    console.log("Nome: "+item.nome);
});
/* Resposta:
    A função forEach percorre cada elemento do vetor de objetos, porém não retorna nada, apenas encontra e, nesse caso, printa cada elemento "nome" no console.
*/

// b)
console.log("Lista4_Questao2b");
console.log("R=");
idosos.map( (item) => {
    return item.nome;
});
/* Resposta:
    A função map percorre o vetor e cria cada elemento "nome" como um retorno da função, podendo ser atribuido para outro vetor. Por exemplo:
*/
    var vetorNomes = idosos.map( (item) => {
        return item.nome;
    });
    console.log(vetorNomes);

// c)
console.log("Lista4_Questao2c");
console.log("R=");
idosos.filter( (item) => {
    return item.idade > 70;
});
/* Resposta:
    A função filter percorre o vetor e retorna todo o objeto de cada elemento, mas que esteja dentro da condição atribuída no retorno da função (funciona como uma condição "if"). Por exemplo:
*/
    var vetorIdadesMaior70 = idosos.filter( (item) => {
        return item.idade > 70;
    });
    console.log(vetorIdadesMaior70);
