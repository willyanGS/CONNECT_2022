#include <stdio.h>
#include <stdlib.h>

// Exercicio 3 (Lista 3)

int main()
{
    char nome[20];
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    system("cls");
    printf("\n");
    for (int i=0; i<10; i++){
        printf("\t%s", nome);
        usleep(100*1000);
    }

    printf("\n");
    return 0;
}
