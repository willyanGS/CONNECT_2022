#include <stdio.h>
#include <stdlib.h>

// Exercicio 13 (Lista 3)

int main()
{
    printf("\n\t=== CALCULADORA DE ADICAO POSITIVA ===\n");
    sleep(1);

    float num, soma=0.0;
    char continuar;

    printf("\nDigite um numero (real) positivo: "); // Entrada do primeiro valor
    scanf("%f", &num);
    if (num>=0) {
        do { // Inicio do somatório
            soma+=num;
            printf("\n\tNUMERO ADICIONADO\n\n\n");
            system("pause");
            do { // Escolha para continuar
                system("cls");
                printf("\n\t=== CALCULADORA DE ADICAO POSITIVA ===\n");
                printf("\n\tRESULTADO PARCIAL = %.2f", soma);
                printf("\n\nDeseja digitar outro numero? (S/N) R: ");
                fflush(stdin);
                scanf("%c", &continuar);
                if (continuar!='s' && continuar!='S' && continuar!='n' && continuar!='N') { // Erro de opçao
                    printf("\n\tOPCAO INVALIDA\n\n\n");
                    system("pause");
                    system("cls");
                }
            } while (continuar!='s' && continuar!='S' && continuar!='n' && continuar!='N');
            if (continuar=='s' || continuar =='S'){ // Opção por continuação de entradas de valores
                    system("cls");
                    printf("\n\t=== CALCULADORA DE ADICAO POSITIVA ===\n");
                    printf("\nDigite outro numero (real) positivo: ");
                    scanf("%f", &num);
                    if (num<0) // Erro de entrada de valor
                        printf("\n\tNUMERO INVALIDO, ENCERRANDO EXECUCAO\n\n\n");
            } else { // Opção por encerrar entradas de valores
                printf("\n\tENCERRANDO EXECUCAO\n\n\n");
                num=(-1);
            }
        } while (num>=0); // Fim do somatório               // ???? colocar esse while direto no lugar do primeiro if
        system("pause");
        system("cls");
        printf("\n\t=== CALCULADORA DE ADICAO POSITIVA ===\n");
        printf("\n\n\tRESULTADO FINAL (Somatorio positivos) = %.02f", soma);
    } else { // Erro de entrada de valor
        printf("\n\tNUMERO INVALIDO, ENCERRANDO EXECUCAO");
    }

    printf("\n\n\n");
    system("pause");
    printf("\n");
    return 0;
}
