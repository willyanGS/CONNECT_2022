#include <stdio.h>
#include <stdlib.h>

// Exercicio 28 (Lista 1)

#define PESO_NOTA1 2
#define PESO_NOTA2 3

int main()
{
    float nota1, nota2, result;

    printf("MEDIA PONDERADA DE 2 NOTAS:\nDigite a primeira nota (peso %d) = ", PESO_NOTA1);
    scanf("%f", &nota1);
    printf("Digite a segunda nota (peso %d) = ", PESO_NOTA2);
    scanf("%f", &nota2);

    result = ((nota1*PESO_NOTA1+nota2*PESO_NOTA2)/(PESO_NOTA1+PESO_NOTA2));
    printf("\nMEDIA FINAL = %.2f\n", result);

    return 0;
}
