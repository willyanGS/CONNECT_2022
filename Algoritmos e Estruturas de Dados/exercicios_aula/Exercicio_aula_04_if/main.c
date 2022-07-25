#include <stdio.h>
#include <stdlib.h>

int main()
{
        exercicio_1();
        printf("\n\n");
        system("pause");
        system("cls");
        exercicio_2();
        printf("\n\n");
        system("pause");
        system("cls");
        exercicio_3();
        printf("\n\n");
        system("pause");

        return 0;
}

void exercicio_1()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if ( (((num%2) == 0) && (num > 10)) || (((num%2) != 0) && (num < 50)) ) {
        printf("SIM!");
    } else printf("NAO!");
}

void exercicio_2()
{
    float num1, num2, num3;

    printf("Digite 3 numeros (na forma> num1 num2 num3): ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("O maior numero dentre eles e: ");
    if ( (num1>=num2) && (num1>=num3) ){
        printf("%.2f", num1);
    } else if ( (num2>=num1) && (num2>=num3) ){
        printf("%.2f", num2);
    } else if ( (num3>=num1) && (num3>=num2) ){
        printf("%.2f", num3);
    } else printf("(algo de errado aconteceu)");
}

void exercicio_3()
{
    float num1, num2, num3, ordem1, ordem2, ordem3;

    printf("Digite 3 numeros diferentes (na forma> num1 num2 num3): ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if ( (num1<num2) && (num3<num2) ) {
        ordem3 = num2;
        if (num1<num3) {
            ordem1 = num1;
            ordem2 = num3;
        } else {
            ordem1 = num3;
            ordem2 = num1;
        }
    } else if ( (num2<num1) && (num3<num1) ) {
        ordem3 = num1;
         if (num2<num3) {
            ordem1 = num2;
            ordem2 = num3;
        } else {
            ordem1 = num3;
            ordem2 = num2;
        }
    } else if ( (num1<num3) && (num2<num3) ) {
        ordem3 = num3;
         if (num1<num2) {
            ordem1 = num1;
            ordem2 = num2;
        } else {
            ordem1 = num2;
            ordem2 = num1;
        }
    }

    if ((num1==num2) && (num2==num3) ) {
        ordem1 = num1;
        ordem2 = num2;
        ordem3 = num3;
    }

    if (num1==num2) {
        if (num1<num3) {
            ordem1=num1;
            ordem2=num2;
            ordem3=num3;
        } else {
            ordem1=num3;
            ordem2=num1;
            ordem3=num2;
        }
    }

    if (num1==num3) {
        if (num1<num2) {
            ordem1=num1;
            ordem2=num3;
            ordem3=num2;
        } else {
            ordem1=num2;
            ordem2=num1;
            ordem3=num3;
        }
    }

    if (num2==num3) {
        if (num2<num1) {
            ordem1=num2;
            ordem2=num3;
            ordem3=num1;
        } else {
            ordem1=num1;
            ordem2=num1;
            ordem3=num2;
        }
    }

    printf("A sequencia crescente dos numeros e: %.2f < %.2f < %.2f", ordem1, ordem2, ordem3);

}

