#include <stdio.h>
#include <stdlib.h>

// Exercicio 17 (Lista 2)

#define cachorro_quente 11.00 // em R$
#define bauru 8.50 // em R$
#define misto_quente 8.00 // em R$
#define hamburger 9.00 // em R$
#define cheeseburger 10.00 // em R$
#define refrigerante 4.50 // em R$

int main()
{
    int opcao, quant;
    float conta;
    do {
        system("cls");
        printf("----------RESTAURANTE----------\n");
        printf("-------------------------------\n");
        printf("1 | Cachorro-quente | R$ %5.02f\n", cachorro_quente);
        printf("2 | Bauru           | R$ %5.02f\n", bauru);
        printf("3 | Misto-quente    | R$ %5.02f\n", misto_quente);
        printf("4 | Hamburger       | R$ %5.02f\n", hamburger);
        printf("5 | Cheeseburger    | R$ %5.02f\n", cheeseburger);
        printf("6 | Refrigerante    | R$ %5.02f\n", refrigerante);
        printf("-------------------------------\n");

        printf("\nEscolha o N%c da opcao desejada: ",248);
        scanf("%d", &opcao);
        if (opcao<1 || opcao>6){
            printf("OPCAO INVALIDA, TENTE NOVAMENTE");
            sleep(1);
        }
    } while (opcao<1 || opcao>6);
    printf("\nQuantos voce vai querer? ");
    scanf("%d", &quant);

    switch(opcao) {
        case 1:
            conta = (cachorro_quente*quant);
            break;
        case 2:
            conta = (bauru*quant);
            break;
        case 3:
            conta = (misto_quente*quant);
            break;
        case 4:
            conta = (hamburger*quant);
            break;
        case 5:
            conta = (cheeseburger*quant);
            break;
        case 6:
            conta = (refrigerante*quant);
    }
    printf("\n\nTotal a pagar: R$ %.02f\n\t\tBom apetite!!!", conta);

    printf("\n");
    return 0;
}
