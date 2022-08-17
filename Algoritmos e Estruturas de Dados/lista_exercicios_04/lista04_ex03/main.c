#include <stdio.h>
#include <stdlib.h>

// Exercicio 3 (Lista 4)

int main()
{
    int vetorA[]={1,2,3,4,5,6,7,8};
    int vetorB[(sizeof(vetorA)/4)];

    printf("Vetor B = [");
    for (int i=0; i<(sizeof(vetorA)/4); i++){
        vetorB[i]=(vetorA[i]*2);
        printf(" %d ", vetorB[i]);
    }
    printf("]\n");
    return 0;
}
