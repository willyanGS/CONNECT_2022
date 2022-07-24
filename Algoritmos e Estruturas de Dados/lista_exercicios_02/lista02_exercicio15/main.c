#include <stdio.h>
#include <stdlib.h>

// Exercicio 15 (Lista 2)

#define AUMENTO_101 1.10    //= +10%
#define AUMENTO_102 1.20    //= +20%
#define AUMENTO_103 1.30    //= +30%
#define AUMENTO_OUTROS 1.40 //= +40%

int main()
{
    float salario_atual, salario_aumento;
    int cod;

    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &salario_atual);
    printf("\n\n(101 = Gerente / 102 = Engenhenheiro / 103 = Tecnico / XXX = Outros)");
    printf("\nInforme o codigo do cargo: ");
    scanf("%d", &cod);

    switch(cod){
        case 101:
            salario_aumento = salario_atual*AUMENTO_101;
            break;
        case 102:
            salario_aumento = salario_atual*AUMENTO_102;
            break;
        case 103:
            salario_aumento = salario_atual*AUMENTO_103;
            break;
        default:
            salario_aumento = salario_atual*AUMENTO_OUTROS;
    }

    printf("\nSALARIO ANTIGO: R$ %.2f", salario_atual);
    printf("\n  SALARIO NOVO: R$ %.2f", salario_aumento);
    printf("\n     (Aumento): R$ %.2f", salario_aumento-salario_atual);
    printf("\n");
    return 0;
}
