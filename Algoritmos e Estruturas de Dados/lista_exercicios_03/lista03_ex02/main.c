#include <stdio.h>
#include <stdlib.h>

// Exercicio 2 (Lista 3)

int main()
{
    int intervalo;
    printf("Digite o tamanho do intervalo de numeros: ");
    scanf("%d", &intervalo);
    printf("\n");

    float num, soma=0.0;
    for (int i=1; i<=intervalo; i++) {
        printf("Digite o %i%c numero: ", i, 167);
        scanf("%f", &num);
        soma += num;
    }
    printf("\nSOMATORIO = %.2f", soma);

    printf("\n");
    return 0;
}
