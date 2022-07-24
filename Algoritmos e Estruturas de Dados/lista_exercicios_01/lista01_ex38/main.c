#include <stdio.h>
#include <stdlib.h>

// Exercicio 38 (Lista 1)

int main()
{
    int dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual;

    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Digite a data de hoje (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);

    // Calculo exato da idade em anos, considerando o dia do aniversario
    int anos_idade;
    if (mes_atual==mes_nasc) {
        if (dia_atual>=dia_nasc)
            anos_idade = (ano_atual-ano_nasc);
        else
            anos_idade = ((ano_atual-ano_nasc)-1);
    } else if (mes_atual>mes_nasc) {
        anos_idade = (ano_atual-ano_nasc);
    } else {
        anos_idade = ((ano_atual-ano_nasc)-1);
    }

    // Calculo dos dias, semanas e meses de idade (considerando 1 mes = 30 dias; 1 ano = 365 dias)
    int anos_em_dias, meses_em_dias, dias;
    dias = dia_atual-dia_nasc;
    meses_em_dias = ((mes_atual-mes_nasc)*30);
    anos_em_dias = ((ano_atual-ano_nasc)*365);

    int dias_idade, semanas_idade, meses_idade;
    dias_idade = (dias + meses_em_dias + anos_em_dias);
    semanas_idade = (dias_idade/7);
    meses_idade = (dias_idade/30);

    printf("\n\nVoce ja tem %d anos de vida...", anos_idade);
    printf("\n  ...E aproximadamente %d meses de vida...", meses_idade);
    printf("\n    ...E aproximadamente %d semanas de vida...", semanas_idade);
    printf("\n      ...E aproximadamente %d dias de vida!!!!!!\n\n", dias_idade);
    system("pause");

    return 0;
}
