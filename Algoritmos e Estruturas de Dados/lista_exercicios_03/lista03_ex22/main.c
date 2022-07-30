#include <stdio.h>
#include <stdlib.h>

// Exercicio 22 (Lista 3)

#define MAX_KM 4000.0 // distancia (em km) a ser percorrida

int main()
{
    float dist, dist_total=0.0;
    int parada=1;

    while (dist_total<MAX_KM) {
        system("cls");
        printf("===DIARIO DE BORDO===");
        printf("\n(Ja percorrido: %.1f km)\n", dist_total);
        printf("\n> Parada n%c %d (km percorridos): ", 248, parada);
        scanf("%f", &dist);
        dist_total+=dist;
        parada++;
    }

    system("cls");
    printf("===DIARIO DE BORDO===");
    printf("\n(Ja percorrido: %.1f km)\n", dist_total);
    printf("\nPARABENS, VOCE CHEGOU A META DE %.1f km", MAX_KM);

    printf("\n");
    return 0;
}
