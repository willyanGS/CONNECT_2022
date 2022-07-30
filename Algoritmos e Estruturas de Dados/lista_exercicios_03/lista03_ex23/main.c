#include <stdio.h>
#include <stdlib.h>

// Exercicio 23 (Lista 3)

int main()
{
    int casas;
    printf("Numero de casas participantes: ");
    scanf("%d", &casas);

    // coleta das informações em cada casa
    int canal, ch3=0, ch5=0, ch8=0, ch11=0, ch13=0, pessoas;
    for(int i=0; i<casas; i++){
        do {
            system("cls");
            printf("=== CASA N%c %2d ===", 248, i+1);
            printf("\n\nCanal assistido: ");
            scanf("%d", &canal);
            switch (canal){
                case 3:
                    printf("\nPessoas assistindo: ");
                    scanf("%d", &pessoas);
                    ch3+=pessoas;
                    break;
                case 5:
                    printf("\nPessoas assistindo: ");
                    scanf("%d", &pessoas);
                    ch5+=pessoas;
                    break;
                case 8:
                    printf("\nPessoas assistindo: ");
                    scanf("%d", &pessoas);
                    ch8+=pessoas;
                    break;
                case 11:
                    printf("\nPessoas assistindo: ");
                    scanf("%d", &pessoas);
                    ch11+=pessoas;
                    break;
                case 13:
                    printf("\nPessoas assistindo: ");
                    scanf("%d", &pessoas);
                    ch13+=pessoas;
                    break;
                default:
                    printf("\nCANAL INVALIDO, digite novamente\n");
                    system("pause");
                    canal=0;
            }
        } while (canal==0);
    }

    // calculo das proporções finais de audiência
    float ch3prop, ch5prop, ch8prop, ch11prop, ch13prop, total_audiencia = 0.0;
    total_audiencia=(float)(ch3+ch5+ch8+ch11+ch13);

    system("cls");
    printf("== AUDIENCIA ==\n");

    ch3prop=(float)((ch3/total_audiencia)*100);
    printf("Canal 03 = %5.2f %%\n", ch3prop);

    ch5prop=(float)((ch5/total_audiencia)*100);
    printf("Canal 05 = %5.2f %%\n", ch5prop);

    ch8prop=(float)((ch8/total_audiencia)*100);
    printf("Canal 08 = %5.2f %%\n", ch8prop);

    ch11prop=(float)((ch11/total_audiencia)*100);
    printf("Canal 11 = %5.2f %%\n", ch11prop);

    ch13prop=(float)((ch13/total_audiencia)*100);
    printf("Canal 13 = %5.2f %%\n", ch13prop);

    printf("\n");
    return 0;
}
