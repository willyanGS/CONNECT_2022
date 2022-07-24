#include <stdio.h>
#include <stdlib.h>

// Exercicio 11 (Lista 2)

#define SALARIO_NIVEL1 12.00 //em R$ por hora/aula
#define SALARIO_NIVEL2 17.00 //em R$ por hora/aula
#define SALARIO_NIVEL3 25.00 //em R$ por hora/aula

int main()
{
    int nivel, hora_aula;
    float salario=0.0;
    printf("---SALARIO DO PROFESSOR---");
    printf("\n\nDigite o Nivel (1, 2 ou 3): ");
    scanf("%d", &nivel);
    printf("Digite a quant. de horas/aula na semana: ");
    scanf("%d", &hora_aula);

    switch(nivel){
    case 1:
        salario = (SALARIO_NIVEL1*hora_aula*4.5);
        break;
    case 2:
        salario = (SALARIO_NIVEL2*hora_aula*4.5);
        break;
    case 3:
        salario = (SALARIO_NIVEL3*hora_aula*4.5);
        break;
    default:
        printf("\n(ATENCAO: REVISE OS DADOS DIGITADOS)");
    }

    printf("\nSALARIO TOTAL = R$ %.2f", salario);
    printf("\n");
    return 0;
}
