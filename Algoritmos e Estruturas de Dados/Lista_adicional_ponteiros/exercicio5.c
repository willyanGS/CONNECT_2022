#include <stdio.h>
// Exercicio 5

//
int exercicio5(void)
{
    int x = 10, y=20;
    int* p1;
    int* p2;
    p1 = &x;
    p2 = &y;
    (*p1)++;

    // a)
    printf("a) %d\n", x);
    // b)
    printf("b) %d\n", y);
    // c)
    printf("c) %d\n", &x);
    // d)
    printf("d) %d\n", &y);
    // e)
    printf("e) %d\n", p1);
    // f)
    printf("f) %d\n", p2);
    // g)
    printf("g) %d\n", ((*p1)+(*p2)));
    // h)
    printf("h) %d\n", *(&x));
    // i)
    printf("i) %d\n", &(*p2));

    return 0;
}
