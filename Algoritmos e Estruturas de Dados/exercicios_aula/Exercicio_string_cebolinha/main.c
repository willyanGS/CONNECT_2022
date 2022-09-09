#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exercicio string: tradutor Cebolinha (Turma da Monica)

int main()
{
    char frase[500];
    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);

    int TAM = strlen(frase);
    for (int i=0; i<TAM; i++){
        if (tolower(frase[i])=='r' && (tolower(frase[i+1]) >= 97 && tolower(frase[i+1]) <= 122)){
            frase[i]-=6;
            if (tolower(frase[i+1])=='r' || (tolower(frase[i+1])=='l')) {
                for(int j=(i+1); j<TAM; j++){
                    frase[j]=frase[j+1];
                }
                TAM--;
            }
        }
    }
    printf("\nTRADUCAO (Cebolines) > %s\n", frase);

    printf("\n");
    return 0;
}
