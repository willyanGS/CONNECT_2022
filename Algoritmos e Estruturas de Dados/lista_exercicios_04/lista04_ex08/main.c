#include <stdio.h>
#include <stdlib.h>

// Exercicio 8 (Lista 4)

#define TAM_RESULT 5 // tamanho do sorteio da LOTO

//
void ler_valores_vetor (int vet[], int tam);
int repetidos_no_vetor (int vet[], int tam);
//

int main()
{
    // Ler os valores do gabarito da LOTO
    int vetR[TAM_RESULT];
    int check;
    do {
        printf("Digite o RESULTADO da LOTO:\n");
        ler_valores_vetor(vetR, TAM_RESULT);

        // checar se os numeros inseridos foram todos diferentes
        check = 1;
        if (repetidos_no_vetor(vetR, TAM_RESULT)>0) {
            check = 0;
            printf("\n*NUMEROS INVALIDOS, DIGITE NOVAMENTE*\n\n");
            system("pause&&cls");
        }
    } while (check==0);

    // Ler as apostas
    int tam_aposta, opcao;
    char continuar;
    do {    // Início do Laço para verificar opção por conferir outra aposta no mesmo gabarito
        do {    // Início do Laço para ler o tamanho da aposta
            system("cls");
            printf("Digite a APOSTA da LOTO:\n");
            printf("(aposta padrao = 10 numeros)\n\t1 - continuar\n\t2 - alterar quantidade\n\t\tOPCAO: ");
            scanf("%d", &opcao);
            switch (opcao){
            case 1:
                tam_aposta=10;
                break;
            case 2:
                printf("Quantos numeros foram jogados nessa aposta? ");
                scanf("%d", &tam_aposta);
                break;
            default:
                printf("AVISO: opcao invalida\n");
                system("pause");
            }
        } while (opcao!=1 && opcao!=2); // Fim do Laço para ler o tamanho da aposta

        // Ler os valores da aposta
        int vetA[tam_aposta];
        do {    // Início do Laço para receber os numeros da aposta a serem conferidos
            system("cls");
            printf("Digite a APOSTA da LOTO:\n");
            ler_valores_vetor(vetA, tam_aposta);

            // checar se os numeros inseridos foram todos diferentes
            check = 1;
            if (repetidos_no_vetor(vetA, tam_aposta)>0) {
                check = 0;
                printf("\n*NUMEROS INVALIDOS, DIGITE NOVAMENTE*\n\n");
                system("pause");
            }
        } while (check==0);     // Fim do Laço para receber os numeros da aposta a serem conferidos

        // Contar quantos numeros acertou
        int acertos=0;
        for (int i=0; i<TAM_RESULT; i++){
            for (int j=0; j<tam_aposta; j++){
                if (vetR[i]==vetA[j]){
                    acertos++;
                }
            }
        }
        printf("\n\nO apostador acertou %d numeros nessa aposta.\n", acertos);

        printf("\n\nDeseja conferir outra aposta desse mesmo sorteio (s/n)? ");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar=='s' || continuar=='S'); // Fim do Laço para verificar opção por conferir outra aposta no mesmo gabarito

    printf("\n");
    return 0;
}


// Função para ler valores do vetor
void ler_valores_vetor (int vet[], int tam) {
    for (int i=0; i<tam; i++){
        printf("%2d%c numero = ", i+1, 167);
        scanf("%d", &vet[i]);
    }
}

// Função para contar quantas posições (índices) do vetor possuem números repetidos entre si
int repetidos_no_vetor (int vet[], int tam) {
    int count = 0;
    for (int i=0; i<tam; i++){
        for (int j=0; j<tam; j++){
            if (vet[i]==vet[j] && i!=j) {
                count++;
                break;
            }
        }
    }
    return count;
}
