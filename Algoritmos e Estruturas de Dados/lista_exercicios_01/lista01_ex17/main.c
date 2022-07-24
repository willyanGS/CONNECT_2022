#include <stdio.h>
#include <stdlib.h>

// Exercicio 17

int main()
{
    float temp_celcius;

    printf("Qual e a temperatura (%cC): ", 248);
    scanf("%f", &temp_celcius);

    printf("\n\nCONVERSOR DE UNIDADE:\n%.2f %cC = %.2f %cF\n", temp_celcius, 248, ((temp_celcius*1.8)+32), 248);

    return 0;
}
