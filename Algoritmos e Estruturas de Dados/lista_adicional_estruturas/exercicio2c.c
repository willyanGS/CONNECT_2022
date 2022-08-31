int exercicio2c()
{
    int N,M,R,pot;
    scanf("%d %d",&N,&M);
    R = 0;
    pot = 1;
    for(int resto = N; resto != 0; )
    {
        R = R + ((resto%M)*pot);
        pot = pot*10;
        resto = ((int)(resto/M));
    }
    printf("\n\n%d",R);
    return 0;
}
