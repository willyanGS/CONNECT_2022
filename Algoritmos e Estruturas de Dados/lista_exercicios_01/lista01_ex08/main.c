#include <stdio.h>
#include <stdlib.h>

// Exercicio 8 (Lista 1)

int main()
{
    float nota1, nota2, nota3, media;
    char nome[20];

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digita a nota 1 (peso 1): ");
    scanf("%f", &nota1);
    printf("Digita a nota 2 (peso 2): ");
    scanf("%f", &nota2);
    printf("Digita a nota 3 (peso 3): ");
    scanf("%f", &nota3);

    media = (((nota1*1)+(nota2*2)+(nota3*3))/(1+2+3));
    printf("\n\nO aluno %s obteve media final = %.2f\n\n", nome, media);

    return 0;
}
