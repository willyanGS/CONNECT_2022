#include <stdio.h>
#include <stdlib.h>

// Exercicio 18 (Lista 3)

int main()
{
    int qtd_alunos;
    printf("Quantidade de alunos na turma? R: ");
    scanf("%d", &qtd_alunos);

    float nota1, nota2, media;
    for(int i=0; i<qtd_alunos; i++){
        do {
            system("cls");
            printf("ALUNO %02d\n\n", i+1);
            printf("Nota 1: ");
            scanf("%f", &nota1);
            printf("Nota 2: ");
            scanf("%f", &nota2);
            if (nota1>10 || nota2>10){
                printf("\n**NOTA INVALIDA, DIGITE NOVAMENTE**");
                sleep(1);
            }
        } while (nota1>10 || nota2>10);
        media=((nota1+nota2)/2);
        printf("----------------------");
        if(media>=6)
            printf("\nRESULTADO (Media=%.2f) -> APROVADO :-)\n\n", media);
        else
            printf("\nRESULTADO (Media=%.2f) -> REPROVADO :-(\n\n", media);
        system("pause");
    }
    printf("\n");
    return 0;
}
