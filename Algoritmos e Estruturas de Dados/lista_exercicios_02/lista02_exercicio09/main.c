#include <stdio.h>
#include <stdlib.h>

// Exercicio 9 (Lista 2)

#define NOTA_APROVADO 70.0 //minima
#define NOTA_RECUPERACAO 40.0 //minima

int main()
{
    int id_aluno;
    printf("Digite o codigo de ID do aluno: ");
    scanf("%d", &id_aluno);

    float nota1, nota2, nota3, media=0.0;
    printf("\nNota 1 = ");
    scanf("%f", &nota1);
    printf("Nota 2 = ");
    scanf("%f", &nota2);
    printf("Nota 3 = ");
    scanf("%f", &nota3);
    media=((nota1+nota2+nota3)/3);

    printf("\nO aluno ID %d obteve media final %.2f e ", id_aluno, media);

    if (media>=NOTA_APROVADO)
        printf("foi APROVADO.");
    else if (media<NOTA_APROVADO && media>=NOTA_RECUPERACAO)
        printf("ficou em RECUPERACAO.");
    else
        printf("foi REPROVADO.");

    printf("\n");
    return 0;
}
