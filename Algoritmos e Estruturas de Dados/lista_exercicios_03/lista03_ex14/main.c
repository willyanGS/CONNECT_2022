#include <stdio.h>
#include <stdlib.h>

// Exercicio 14 (Lista 3)

int main()
{
    char resp[10]="nao";

    do {
        system("cls");
        printf("\n\tOla...");
        usleep(500*1000);
        printf("\t Tudo bem?");
        usleep(500*1000);
        printf("\n\n\tR: ");
        scanf("%s", resp);
    } while ((resp[0]!='s' && resp[0]!='S') || (resp[1]!='i' && resp[1]!='I') || (resp[2]!='m' && resp[2]!='M'));

    sleep(1);
    printf("\n\tQue bom!");
    printf("\n");
    return 0;
}
