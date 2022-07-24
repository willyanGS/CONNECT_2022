#include <stdio.h>
#include <stdlib.h>

// Exercicio 12 (Lista 2)

int main()
{
    float x, y, z;
    printf("Digite o valor X: ");
    scanf("%d", &x);
    printf("Digite o valor Y: ");
    scanf("%d", &y);
    printf("Digite o valor Z: ");
    scanf("%d", &z);


    if ((x>=(y+z)) || (y>=(x+z)) || (z>=(x+y)))                   // Verificando se pode ser triangulo
        printf("\n\nVALORES NAO PODEM FORMAR UM TRIANGULO");
    else {
        if (x==y && x==z)
            printf("\n\nVALORES FORMAM UM TRIANGULO EQUILATERO");
        else if (x==y || x==z || y==z)
            printf("\n\nVALORES FORMAM UM TRIANGULO ISOCELES");
        else if (x!=y && x!=z && y!=z)
            printf("\n\nVALORES FORMAM UM TRIANGULO ESCALENO");
    }

    printf("\n");
    return 0;
}
