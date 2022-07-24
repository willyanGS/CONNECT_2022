#include <stdio.h>
#include <stdlib.h>

// Exercicio 23 (Lista 1)

int main()
{
    float sombra_predio, sombra_pessoa, altura_pessoa, altura_predio;

    printf("Qual o comprimento (m) da sombra do predio? ");
    scanf("%f", &sombra_predio);

    printf("Qual o comprimento (m) da sua sombra? ");
    scanf("%f", &sombra_pessoa);

    printf("Qual a sua altura (m)? ");
    scanf("%f", &altura_pessoa);

    altura_predio = ((altura_pessoa/sombra_pessoa)*sombra_predio);
    printf("\n\nA altura do predio e %.2f metros.\n", altura_predio);

    return 0;
}
