#include <stdio.h>
#include <stdlib.h>

// verificar se um numero é primo

//
void numero_primo (int num);
//

int main()
{
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    numero_primo(numero);

    printf("\n");
    return 0;
}

// função para verificar se um numero é primo
void numero_primo (int num) {
    int primo=0, i=2;
    do {
        if (num!=i && num%i == 0)
            primo=1;
        i++;
    } while (primo==0 && i<num);

    printf("\nO numero %d ", num);
    if (primo==0)
        printf("e primo.");
    else
        printf("nao e primo.");
}
