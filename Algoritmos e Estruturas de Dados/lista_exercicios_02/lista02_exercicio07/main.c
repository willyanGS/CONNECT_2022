#include <stdio.h>
#include <stdlib.h>

// Exercicio 7 (Lista 2)

int main()
{
    char sexo='s';
    float altura, peso_ideal;

    do {
        system("cls");
        printf("Qual o seu sexo biologico (M-masculino / F-feminino)? R: ");
        fflush(stdin);
        scanf("%c", &sexo);
        printf("\nQual a sua altura (em metros)? R: ");
        scanf("%f", &altura);

        if ((sexo=='M') || (sexo=='m')) {
            peso_ideal = ((72.7*altura)-58);
        } else if ((sexo=='F') || (sexo=='f')) {
            peso_ideal = ((62.1*altura)-44.7);
        } else {
            printf("\nREVISE OS DADOS DE ENTRADA\n");
            system("pause");
        }
    } while ((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f'));

    printf("\nSeu peso ideal = %.2f (kg)", peso_ideal);

    printf("\n");
    return 0;
}
