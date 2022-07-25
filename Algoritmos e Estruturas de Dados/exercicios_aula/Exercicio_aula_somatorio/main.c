#include <stdio.h>
#include <stdlib.h>

int main()
{
    //somatorio();

    //somatorio_linha();

    //divisores();

    printf("\n");
    return 0;
}

void somatorio() //slide 39
{
    int n, somatorio=0;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        somatorio = somatorio + i;
    }
    printf("\nO somatorio de 1->%d resultante e %d", n, somatorio);

}

void somatorio_linha () //slide 41
{
    int n, somatorio=0;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        somatorio = somatorio + i;
        printf("\nO somatorio de 1->%d resultante e %d", i, somatorio);
    }
}

void divisores() // slide 40
{
    int n;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    for (int i=2; i<=n; i++) {
        if ((n%i) == 0)
            printf("\nO numero %d e divisor de %d", i, n);
    }
}
