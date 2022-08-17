#include <stdio.h>
#include <stdlib.h>

// Exercicio 5 (Lista 4)

int main()
{
    int tam=10;
    int vetA[tam];

    printf("Digite os valores (inteiros) do vetor:\n");
    for (int i=0; i<tam; i++){
        printf("Posicao [%d] = ", i);
        scanf("%d", &vetA[i]);
    }
    system("cls");

    int soma_inf15 = 0;
    int qtd_15 = 0;
    int soma_sup15 = 0;
    int qtd_sup15 = 0;
    for (int i=0; i<tam; i++){
        if (vetA[i]<15)
            soma_inf15+=vetA[i];
        else if (vetA[i]==15)
            qtd_15++;
        else {
            qtd_sup15++;
            soma_sup15+=vetA[i];
        }
    }
    printf("a) SOMATORIO (dos elementos<15) = %d\n", soma_inf15);
    printf("b) QUANTIDADE (dos elementos=15) = %d\n", qtd_15);
    float media_sup15;
    if (qtd_sup15==0)
        media_sup15=0;

    else
        media_sup15=((float)soma_sup15/qtd_sup15);
    printf("c) MEDIA (dos elementos>15) = %.2f\n", media_sup15);

    printf("\n");
    return 0;
}
