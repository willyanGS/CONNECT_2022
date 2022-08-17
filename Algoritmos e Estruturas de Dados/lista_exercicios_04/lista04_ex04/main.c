#include <stdio.h>
#include <stdlib.h>

// Exercicio 4 (Lista 4)

int main()
{
    int vetA[]={1,2,3,4,5,6,7,8,9,10};
    int vetB[]={10,9,8,7,6,5,4,3,2,1};
    int vetC[(sizeof(vetA)/4)];

    printf("Vetor C = [");
    for (int i=0; i<(sizeof(vetC)/4); i++){
        vetC[i]=(vetA[i]+vetB[i]);
        printf(" %d ", vetC[i]);
    }
    printf("]\n");
    return 0;
}
