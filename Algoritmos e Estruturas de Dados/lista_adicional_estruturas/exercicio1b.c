int exercicio1b()
{
    int n, m;
    do {
        printf("Digite 2 numeros (separados por espaco): ");
        scanf("%d %d", &n, &m);
        if (n<2 || n>9) {
            printf("\nNumeros invalidos, digite novamente\n\n");
            system("pause&&cls||clear");
        }
    } while (n<2 || n>9);

    printf("\nTABUADA\n");
    for (int i=1; i<=m; i++){
        printf("%d x %2d = %3d\n", n, i, (n*i));
    }
    return 0;
}
