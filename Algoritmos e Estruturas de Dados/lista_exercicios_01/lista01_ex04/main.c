#include <stdio.h>
#include <stdlib.h>

// Exercicio 4 (Lista 1)

int main()
{
    char nome[20];
    int idade;

    printf("Qual o seu nome? ");
    scanf("%s", nome);
    printf("\nPrazer %s, quantos anos voce tem? ", nome);
    scanf("%d", &idade);
    printf("\n\n\t\"%s, voce ja viveu %d dias!!!\"\n", nome, (idade*365));

    return 0;
}
