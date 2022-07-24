#include <stdio.h>
#include <stdlib.h>

// Exercicio 6 (Lista 2)

int main()
{
    int num1, num2, num3, ordem1, ordem2, ordem3;

    printf("Digite 3 valores inteiros diferentes (separados por ,) = ");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    if (num1>num2 && num1>num3) {
        ordem1=num1;
        if (num2>num3){
            ordem2=num2;
            ordem3=num3;
        } else {
            ordem2=num3;
            ordem3=num2;
        }
    }

    if (num2>num1 && num2>num3) {
        ordem1=num2;
        if (num1>num3){
            ordem2=num1;
            ordem3=num3;
        } else {
            ordem2=num3;
            ordem3=num1;
        }
    }

    if (num3>num1 && num3>num2) {
        ordem1=num3;
        if (num1>num2){
            ordem2=num1;
            ordem3=num2;
        } else {
            ordem2=num2;
            ordem3=num1;
        }
    }

    printf("\nOrdem decrescente dos valores: %d, %d, %d", ordem1, ordem2, ordem3);

    printf("\n");
    return 0;
}
