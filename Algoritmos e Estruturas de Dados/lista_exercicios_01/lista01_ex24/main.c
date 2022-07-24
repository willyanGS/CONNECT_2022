#include <stdio.h>
#include <stdlib.h>

// Exercicio 24 (Lista 1)

int main()
{
    float litros_refresco, litros_agua, litros_maracuja;

    printf("Quantos litros de refresco voce quer preparar? ");
    scanf("%f", &litros_refresco);

    litros_agua = (0.8*litros_refresco);
    litros_maracuja = (0.2*litros_refresco);
    printf("\nVoce vai precisar de %.2f L de agua mineral e %.2f L de suco de maracuja.\n", litros_agua, litros_maracuja);

    return 0;
}
