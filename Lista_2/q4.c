void q4()
{
    // Escrever a maior e menor altura do grupo (de 5);
    // A média da altura dos homens;
    // Quantas mulheres são.
    int i, contadorMulheres = 0;
    float altura[5], mediaHomens = 0, maiorAltura, menorAltura;
    char sexo[100];

    for (i = 0; i <= 4; i++) // Repetir entradas
    {
        printf("Insira altura: ");
        scanf("%f", &altura[i]);

        printf("Insira o sexo (Masculino ou Feminino): ");
        scanf("%s", sexo);

        if (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0)
        {
            mediaHomens += altura[i]; // se for masculino, soma a altura
        }
        else if (strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0)
        {
            contadorMulheres++; // se for feminino, adiciona um no contador de meninas
        }
    }

    maiorAltura = altura[0];
    menorAltura = altura[0];
    for (i = 0; i <= 4; i++)
    {
        if (altura[i] > maiorAltura) // comparar alturas e definir a maior
        {
            maiorAltura = altura[i];
        }
        else if (altura[i] < menorAltura) // comparar alturas e definir a menor
        {
            menorAltura = altura[i];
        }
    }

    printf("\nMédia de altura: %.2f\nMaior altura: %.2f\nMenor altura: %.2f\nNumero de mulheres: %d", mediaHomens / 2, maiorAltura, menorAltura, contadorMulheres);
}