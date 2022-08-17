#include <stdio.h>
#include <stdlib.h>

// Exercicio 6 (Lista 4)

int main()
{
    int tam=10;
    int vet_idade[tam];

    printf("Digite as idades (anos completos):\n");
    for (int i=0; i<tam; i++){
        printf("Pessoa %d = ", i+1);
        scanf("%d", &vet_idade[i]);
    }
    system("cls");

    int maior, menor;
    int menor_idade = vet_idade[0];
    int maior_idade = vet_idade[0];
    for (int i=1; i<tam; i++){
        if (vet_idade[i]>maior_idade) {
            maior_idade=vet_idade[i];
            maior=i;
        }
        if (vet_idade[i]<menor_idade) {
            menor_idade=vet_idade[i];
            menor=i;
        }
    }

    printf("Menor idade = %d anos (Pessoa n%c%2d)\n", menor_idade, 248, menor+1);
    printf("Maior idade = %d anos (Pessoa n%c%2d)\n", maior_idade, 248, maior+1);

    printf("\n");
    return 0;
}
