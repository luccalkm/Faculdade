void q2()
{
    int a, soma = 0;

    while (a != 0)
    {
        printf("Entre com seus números: ");
        scanf("%d", &a);
        soma += a;
    }
    printf("Soma total: %d", soma);
}