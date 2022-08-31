#include <stdio.h>

int exercicio15()
{
    char sexo;
    int idade, contrib;

    printf("Digite o sexo (M-masc/F-fem): ");
    fflush(stdin);
    scanf("%c", &sexo);

    printf("Digite a idade (anos completos): ");
    scanf("%d", &idade);

    printf("Digite o tempo de contribuicao (anos completos): ");
    scanf("%d", &contrib);

    if ((sexo=='M') || (sexo=='m')){
        if (((idade>=65) && (contrib>=10)) || ((idade>=63) && (contrib>=15)))
            printf("\nAposentavel INSS");
        else
            printf("\nNao Aposentavel INSS");
    } else if ((sexo=='F') || (sexo=='f')){
        if (((idade>=63) && (contrib>=10)) || ((idade>=61) && (contrib>=15)))
            printf("\nAposentavel INSS");
        else
            printf("\nNao Aposentavel INSS");
    } else
        printf("\nRevise os dados de entrada.");

    return 0;
}
