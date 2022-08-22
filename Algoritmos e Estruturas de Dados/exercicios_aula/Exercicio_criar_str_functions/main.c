#include <stdio.h>
#include <stdlib.h>

// Criando funções para strings

//
int strlen(char str[]);
void strcpy(char str_copy[], char str_source[]);
void strcat(char str1[], char str2[], char str_total[]);
void to_upper(char str[]);
void to_lower(char str[]);
//
#define TAM 500
//

int main()
{
    char frase[TAM];
    printf("Digite palavra/frase: ");
    gets(frase);

    system("cls");
    int tamanho = strlen(frase);
    printf("\nFrase = {%s}\n\nTamanho = %d", frase, tamanho);

    char frase2[tamanho+1];
    strcpy(frase2, frase);
    printf("\n\nCopia = {%s}", frase2);

    char frase3[(tamanho*2)+1];
    strcat(frase, frase2, frase3);
    printf("\n\nConcatenacao = {%s}", frase3);

    to_upper(frase3);
    printf("\n\nMaiusculo = {%s}", frase3);

    to_lower(frase3);
    printf("\n\nMinusculo = {%s}", frase3);

    printf("\n\nClassificacao alfabetica string: ");
    int comp;
    comp = strcmp(frase, "aaab");
    if (comp == 0)
        printf("Iguais");
    else if (comp < 0)
        printf ("Primeira string");
    else if (comp > 0)
        printf("Segunda string");


    printf("\n");
    return 0;
}

// tamanho da string
int strlen(char str[]){
    int len=0;
    while (str[len]!='\0') {
        len++;
    }
    return len;
}

// copia de string
void strcpy(char str_copy[], char str_source[]) {
    for (int i=0; i<(strlen(str_source)+1) ; i++){
        str_copy[i] = str_source[i];
    }
}

// concatenacao de strings
void strcat(char str1[], char str2[], char str_total[]) {
    int i;
    for (i=0; i<strlen(str1); i++){
        str_total[i] = str1[i];
    }
    int k=0;
    for (int j=i; j<(strlen(str1)+strlen(str2)+1); j++){
        str_total[j] = str2[k];
        k++;
    }
}

// comparacao alfabetica (ASCII) de strings
int strcmp(char str1[], char str2[]) {
    for (int i=0; ( i<(strlen(str1)+1) && i<(strlen(str2)+1) ) ; i++){
        to_lower(str1);
        to_lower(str2);
        if (str1[i] < str2[i])
            return -1;
        else if (str1[i] > str2[i])
            return 1;
        else
            continue;
    }
    return 0;
}

// converter tudo para maiusculo
void to_upper(char str[]){
    for (int i=0; i<strlen(str); i++){
        if (str[i]>=97 && str[i]<=122)
            str[i] = ((int)str[i] - 32);
    }
}

// converter tudo para minusculo
void to_lower(char str[]){
    for (int i=0; i<strlen(str); i++){
        if (str[i]>=65 && str[i]<=90)
            str[i] = ((int)str[i] + 32);
    }
}
