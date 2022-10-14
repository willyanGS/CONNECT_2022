#include <stdio.h>
// Exercicio 8

//
void funcaoPrimo (int m, int *p1, int *p2);
//

int exercicio8(void) {
    int p1, p2;

    int num;
    printf("Digite o numero desejado: ");
    scanf("%d", &num);

    funcaoPrimo(num, &p1, &p2);

    printf("\nPrimo Menor = %d\nNumero = %d\nPrimo Maior = %d", p1, num, p2);


}

void funcaoPrimo (int m, int *p1, int *p2) {
    int check;

    // procurar o primeiro primo menor
    for (int i=m-1; i>1; i--) {
        check=0;
        for (int j=2; (j<i && check==0); j++){
            if (i%j == 0) {
                check=1;    // encontrou multiplo: nao é primo
            }
        }
        if (check == 0) {   // não encontrou multiplo: é primo
            *p1=i;
            break;
        }
    }

    // procurar o primeiro primo maior
    for (int i=m+1; ; i++) {
        check=0;
        for (int j=2; (j<i && check==0); j++){
            if (i%j == 0) {
                check=1;    // encontrou multiplo: nao é primo
            }
        }
        if (check == 0) {   // não encontrou multiplo: é primo
            *p2=i;
            break;
        }
    }
}
