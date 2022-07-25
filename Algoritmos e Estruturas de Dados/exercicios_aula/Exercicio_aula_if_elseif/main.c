#include <stdio.h>
#include <stdlib.h>

int main()
{
    double transacao, comissao;

    printf("Valor da transacao: R$ ");
    scanf("%lf", &transacao);

    if (transacao>0 && transacao<=2500) {
        comissao = (30 + (transacao*0.017));
        if (comissao<39.00) {
                comissao=39.00;
        }
    } else if (transacao>2500 && transacao<=6250) {
        comissao = (56.00 + (transacao*0.0066));
    } else if (transacao>6250 && transacao<=20000) {
        comissao = (76.00 + (transacao*0.0034));
    } else if (transacao>20000 && transacao<=50000) {
        comissao = (100.00 + (transacao*0.0022));
    } else if (transacao>50000 && transacao<=500000) {
        comissao = (155.00 + (transacao*0.0011));
    } else if (transacao>500000) {
        comissao = (255.00 + (transacao*0.0009));
    } else
        printf("Valor incorreto");

    printf("\n\nValor da comissao: R$ %.2lf", comissao);


    return 0;
}
