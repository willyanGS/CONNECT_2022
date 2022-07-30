#include <stdio.h>
#include <stdlib.h>

// indice
void tabuada(int N);
void tabuadas();
//

int main()
{
    // mostrar todas as tabuadas
    tabuadas();
    printf("\n");

    // escolher uma tabuada
    int num;
    system("cls");
    printf("Digite o numero: ");
    scanf("%d", &num);
    tabuada(num);

    printf("\n");
    system("pause");
    return 0;
}

// função para mostrar uma tabuada
void tabuada(int N){
    system("cls");
    int i, result;
    for(i=0; i<=10; i++){
        result = (N*(i));
        printf("%2d * %2d = %3d\n", N, i, result);
    }
}

// função para mostrar todas as tabuadas (0 a 10)
void tabuadas(){
    for (int i=0; i<=10; i++){
        tabuada (i);
        printf("\n");
        system("pause");
    }
}
