#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("(modelo)\n");
    modelo();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(a)\n");
    a();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(b)\n");
    b();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(c)\n");
    c();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(d)\n");
    d();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(e)\n");
    e();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(f)\n");
    f();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(g)\n");
    g();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(h)\n");
    h();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("(i)\n");
    i();
    printf("\n\n");
    sleep(1);
    system("cls");

    printf("\n");
    return 0;
}

void modelo()
{
    int lin, col;

    for (lin=0; lin<8; lin++){
        for (col=0; col<8; col++){
            printf("# ");
            usleep(50*1000);
        }
        printf("\n");
    }
}

void a()
{
    int lin, col;

    for (lin=0; lin<8; lin++){
        for (col=0; col<8; col++){
            if (col<=lin)
                printf("# ");
        }
        printf("\n");
    }
}

void b()
{
    int lin, col;

    for (lin=0; lin<8; lin++){
        for (col=0; col<8; col++){
            if (col>=lin)
                printf("# ");
        }
        printf("\n");
    }
}

void c()
{
    int lin, col;

    for (lin=0; lin<8; lin++){
        for (col=0; col<8; col++){
            if (col>=lin)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void d()
{
    int lin, col;

    for (lin=0; lin<8; lin++){
        for (col=0; col<8; col++){
            if (col+lin>=7)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void e()
{
    int lin, col;

    for (lin=0; lin<7; lin++){
        for (col=0; col<7; col++){
            if (lin==0 || col==0 || lin==6 || col==6)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void f()
{
    int lin, col;

    for (lin=0; lin<7; lin++){
        for (col=0; col<7; col++){
            if (lin==0 || lin==6 || col==lin)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void g()
{
    int lin, col;

    for (lin=0; lin<7; lin++){
        for (col=0; col<7; col++){
            if (lin==0 || lin==6 || col+lin==6)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void h()
{
    int lin, col;

    for (lin=0; lin<7; lin++){
        for (col=0; col<7; col++){
            if (lin==0 || lin==6 || col+lin==6 || col==lin)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void i()
{
    int lin, col;

    for (lin=0; lin<7; lin++){
        for (col=0; col<7; col++){
            if (lin==0 || col==0 || lin==6 || col==6 || col+lin==6 || col==lin )
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

//
