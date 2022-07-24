#include <stdio.h>
#include <stdlib.h>

// Exercicio 10 (Lista 2)

int main()
{
    int num1, num2;
    printf("Digite dois numeros inteiros (separados por espaco): ");
    scanf("%d %d", &num1, &num2);

    printf("\nDiferenca entre o maior e o menor = ");
    (num1>num2) ? (printf("%d", (num1-num2))) : (printf("%d", (num2-num1)));

    printf("\n");
    return 0;
}
