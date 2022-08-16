#include <stdio.h>
#include <stdlib.h>

// Exercicio contar cada caracteres

//
void chars_count (char text[]);
//

int main()
{
    int TAM = 1000;
    char frase[TAM];
    printf("Digite uma frase: ");
    gets(frase);

    chars_count(frase);

    printf("\n");
    return 0;
}

void chars_count (char text[]) {
    int character[128];
    for (int j=0; (j<128); j++){
        character[j]=0;
    }
    for (int i=0; (text[i]!='\0'); i++){
        character[((int)text[i])]++;
    }
    for (int j=33; (j<128); j++){   // mostrar os caracteres a partir do space (32) até del (127) (ASCII)
        if (character[j])   // equivalente a !=0, pois 0 é = falso, não entra no if
            printf("\nCharacter (%03d)\"%c\" = %d vezes", j, j, character[j]);
    }
}
