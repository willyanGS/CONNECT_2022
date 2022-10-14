#include <stdio.h>
#include <math.h>
// Exercicio 7

//
int teste (int n, int* b, int* k);
//

int exercicio7(void) {
    int num0, num1, num2;

    printf("Digite o numero: ");
    scanf("%d", &num0);

    if (teste(num0, &num1, &num2) != 0)
        printf("%d ^ %d = %d", num1, num2, num0);
    else
        printf("Numero invalido!");

    return 0;
}

//
int teste (int n, int* b, int* k) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<n; j++) {
            if (pow(i,j) == n){
                *b = i;
                *k = j;
                return 1; // true
            }
        }
    }
    return 0; // false
}
