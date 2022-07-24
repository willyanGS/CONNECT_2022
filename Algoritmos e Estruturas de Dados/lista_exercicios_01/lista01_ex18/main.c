#include <stdio.h>
#include <stdlib.h>

// Exercicio 18 (Lista 1)

int main()
{
    int dias_trab;
    float total_horas_trab, turno, total_horas, salario_bruto, hora_extra;
    char nome_trab[25];

    printf("\tHIPOTHETICUS\n\nNome do funcionario: ");
    scanf("%s", nome_trab);
    printf("\nTurno diario do funcionario (h): ");
    scanf("%f", &turno);
    printf("\nDias de expediente no mes (d): ");
    scanf("%d", &dias_trab);
    printf("\nTotal de horas de trabalho do funcionario no mes (h): ");
    scanf("%f", &total_horas_trab);

    total_horas = turno*dias_trab; // Quanto deveria ter trabalhado

    if (total_horas_trab>total_horas) {
        hora_extra = (total_horas_trab-total_horas);
        salario_bruto = ((hora_extra*15.00) + (total_horas*10.00));
    } else {
        salario_bruto = (total_horas_trab*10.00);
    }

    printf("\n\nSalario do funcionario %s:\n\tBRUTO   = R$ %.2f\n\tLIQUIDO = R$ %.2f\n", nome_trab, salario_bruto, (salario_bruto*0.9));

    return 0;
}
