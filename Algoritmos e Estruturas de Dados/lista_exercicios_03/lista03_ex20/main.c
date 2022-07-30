#include <stdio.h>
#include <stdlib.h>

// Exercicio 20 (Lista 3)

//
typedef struct {
    char nome_animal[20];
    int especie;
} animais;  // obs: nao utilizei para o cálculo do total, mas serviria para armazenar as informações
//

int main()
{
    int qtd_animais;
    printf("Digite o total de animais na loja: ");
    scanf("%d", &qtd_animais);

    animais animal[qtd_animais];
    int caes=0, gatos=0;

    for (int i=0; i<qtd_animais; i++){
        do {
            system("cls||clear");
            printf("Nome do animal (n%c%2d): ", 248, i+1);
            scanf("%s", animal[i].nome_animal);
            printf("Especie do %s (1-cao / 2-gato): ", animal[i].nome_animal);
            animal[i].especie=0;
            scanf("%d", &animal[i].especie);
            switch (animal[i].especie){
                case 1:
                    caes++;
                    break;
                case 2:
                    gatos++;
                    break;
                default:
                    printf("OPCAO INVALIDA (preencha novamente)\n");
                    system("pause");
            }
        } while (animal[i].especie!=1 && animal[i].especie!=2);
    }

    system("cls||clear");
    printf("TOTAL DE ANIMAIS NA LOJA\n\nCaes = %d\n\nGatos = %d\n", caes, gatos);

    printf("\n");
    return 0;
}
