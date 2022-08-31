int exercicio2b(void)
{
    double total,media,lido;
    int contador;
    total = 0.0;
    contador = 0;
    do
    {
        scanf("%lf",&lido);
        if (lido>=0) {
            contador++;
            total = (total + lido);
        }
    }
    while (lido >= 0);
    if (contador==0)
        media=0.0;
    else
        media = (total/contador);
    printf("Media = %lf",media);
    return 0;
}
