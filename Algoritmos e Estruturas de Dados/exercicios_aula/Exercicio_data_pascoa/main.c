#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int Y, ano;
    printf("Ano (apos 1582): ");
    scanf("%d", &Y);
    ano=Y;

    int G, C, X, Z, E, N, D, dia;
    char mes[10], marco[10]="marco", abril[10]="abril";

    G=((Y%19)+1);
    C=(((int)(Y/100))+1);
    X=(((int)((3*C)/4))-12);
    Z=(((int)(((8*C)+5)/25))-5);

    E=((11*G+20+Z-X)%30);
    if (((E==25) && (G>11)) || (E==24)){
        E++;
    }

    N=(44-E);
    if (N<21){
        N+=30;
    }

    D=((int)((5*Y)/4)-(X+10));
    N=(N+7-((D+N)%7));
    if (N>31){
        strcpy(mes,abril);
        dia=(N-31);
    } else {
        strcpy(mes,marco);
        dia=N;
    }
    system("cls");
    printf("\nPascoa: %d de %s de %d", dia, mes, ano);

    printf("\n\n");
    system("pause\n");
    return 0;
}
