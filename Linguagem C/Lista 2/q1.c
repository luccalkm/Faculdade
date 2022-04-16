void q1()
{
    int numero, i = 1;

    printf("Entre com um número: ");
    scanf("%d", &numero);

    while (i < 11)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
}