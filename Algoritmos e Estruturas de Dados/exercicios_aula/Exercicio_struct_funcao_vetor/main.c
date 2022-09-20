#include <stdio.h>
#include <stdlib.h>

/* Script para criar um vetor com malloc dentro de uma função e retornar para a main */

//
struct Teste {
    char nome[20];
    int numero;
};
//
struct Teste* LerDados();
//

int main()
{
    // Criando o ponteiro e chamando a função
    struct Teste *t1;
    t1 = LerDados();

    // Testando se gravou na respectiva posição correta
    system("cls");
    printf("Nome: %s\nNumero: %d", t1[1].nome, t1[1].numero);


    printf("\n");
    return 0;
}

// Função para ler o tamanho e os dados (cria um ponteiro, aloca o vetor, e retorna o ponteiro)
struct Teste* LerDados() {
    int tam;
    printf("Tamanho (>=2): ");
    scanf("%d", &tam);

    struct Teste *p;    // cria um ponteiro na função
    p = malloc(sizeof(struct Teste) * tam);     // define o tamanho do vetor com malloc

    for (int i=0; i<tam; i++){      // preenche os campos (dados) do vetor
        system("cls");
        printf("Dados [%d]\n", i);
        printf("Nome? ");
        fflush(stdin);
        gets(p[i].nome);
        printf("Numero? ");
        scanf("%d", &p[i].numero);
    }

    return p;   // retorna o ponteiro criado
}
