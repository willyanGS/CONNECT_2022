#include <stdio.h>
#include <stdlib.h>

// Exercicio 15 (Lista 3)

// prototipo
void fatorial(int num);

int main()
{
    int num;
    printf("FATORIAL DE UM NUMERO\n\nDigite um numero inteiro positivo (max 12): ");
    scanf("%ud", &num);

    fatorial(num);

    printf("\n");
    return 0;
}

void fatorial(int num){
    printf("\n\nRESULTADO (%d!) -> [", num);
    int result=1;
    for(int i=num; i>0; i--){
        printf("%d", i);
        if (i>1)
            printf(" * ");
        result*=i;
    }
    printf("] = %d", result);
}
