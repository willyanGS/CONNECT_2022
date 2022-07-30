#include <stdio.h>
#include <stdlib.h>

// Exercicio 19 (Lista 3)

#define NUM_PESSOAS 15

int main()
{
    float altura, maior, menor;
    for (int i=0; i<NUM_PESSOAS; i++){
        printf("Digite a altura (m) da %d%c pessoa: ", i+1, 166);
        scanf("%f", &altura);
        if (i==0){
            maior = altura;
            menor = altura;
        } else {
            if (altura>maior)
                maior=altura;
            if (altura<menor)
                menor=altura;
        }
    }
    system("cls||clear");
    printf("\nMenor altura = %.2f m\n", menor);
    printf("Maior altura = %.2f m\n", maior);

    printf("\n");
    return 0;
}
