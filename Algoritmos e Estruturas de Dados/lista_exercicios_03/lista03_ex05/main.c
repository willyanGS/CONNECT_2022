#include <stdio.h>
#include <stdlib.h>

// Exercicio 5 (Lista 3)

int main()
{
    float num, soma=0.0;
    for (int i=0; i<10; i++){
        printf("Digite o %i%c numero: ", i+1, 167);
        scanf("%f", &num);
        soma += num;
    }
    printf("\nSOMATORIO = %.2f", soma);

    printf("\n");
    return 0;
}
