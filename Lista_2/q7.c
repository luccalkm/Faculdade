void q7()
{
    int numeroConsumidor[100], i = 0, contador = 1;
    float precoKW[100], qtdKW[100];

    printf("Inserir um numero do consumidor zero (0) encerra o programa.\n");

    for (i = 0; i = contador; i++)
    {
        printf("Insira o numero do consumidor: ");
        scanf("%d", &numeroConsumidor[i]);
        printf("\nInsira o preco do do kWh: ");
        scanf("%f", &precoKW[i]);
        printf("\nInsira a quantidade gasta de kWh no mes: ");
        scanf("%f", &qtdKW[i]);

        if (numeroConsumidor[i] != 0)
        {
            contador++;
        }
        else if (numeroConsumidor[i] == 0)
        {
            i = contador;
        }
    }
}
