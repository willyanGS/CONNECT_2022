#include <stdio.h>
#include <stdlib.h>

// Exercicio 8 (Lista 3)

#define NUM_PESSOAS 10

int main()
{
    char nome[20], nomeMaisNova[20];
    int idade_leitura, idadeMaisNova=200;
    for (int i=0; (i<NUM_PESSOAS); i++){
        system("cls");
        printf("Digite o nome da %i%c pessoa: ", i+1, 166);
        scanf("%s", nome);
        printf("Digite a idade (em anos completos) da %i%c pessoa: ", i+1, 166);
        scanf("%d", &idade_leitura);
        if (idade_leitura<idadeMaisNova){
            strcpy(nomeMaisNova, nome);
            idadeMaisNova=idade_leitura;
        }
    }
    printf("\nPESSOA MAIS NOVA = %s (%d anos)", nomeMaisNova, idadeMaisNova);
    printf("\n");
    return 0;
}
