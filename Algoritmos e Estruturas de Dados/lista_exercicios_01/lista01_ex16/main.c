#include <stdio.h>
#include <stdlib.h>

// Exercicio 16 (Lista 1)

int main()
{
    int num_sand;
    float queijo_kg, presunto_kg, carne_kg;

    printf("\tLANCHONETE GOSTOSURA\n\nInforme a quantidade de sanduiches a fazer: ");
    scanf("%d", &num_sand);

    queijo_kg = (num_sand*2*0.05);
    presunto_kg = (num_sand*0.05);
    carne_kg = (num_sand*0.1);

    printf("\n\nTOTAL A COMPRAR:");
    printf("\n\tQueijo(kg)  = %.3f\n\tPresunto(kg)= %.3f\n\tCarne(kg)   = %.3f", queijo_kg, presunto_kg, carne_kg);

    printf("\n");
    return 0;
}
