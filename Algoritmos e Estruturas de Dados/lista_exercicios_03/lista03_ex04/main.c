#include <stdio.h>
#include <stdlib.h>

// Exercicio 4 (Lista 3)

int main()
{
    char nome[20];
    int contador;
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    system("cls");
    printf("Digite um numero (inteiro): ");
    scanf("%d", &contador);
    system("cls");
    printf("\n");

    for (int i=0; i<contador; i++){
        printf("\t%s", nome);
        usleep(100*1000);
    }

    printf("\n");
    return 0;
}
