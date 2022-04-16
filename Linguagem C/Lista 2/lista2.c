#include <stdio.h>
#include <string.h>
int main()
{
    q7();
}

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
void q3()
{
    int i, numero, auxMaior = 0, auxMenor = 0;

    printf("Entre seu numero: ");
    scanf("%d", &numero);

    auxMenor = numero;

    for (i = 0; i < 20; i++)
    {
        printf("Entre seu proximo numero: ");
        scanf("%d", &numero);

        if (numero > auxMaior)
            auxMaior = numero;
        else if (numero < auxMenor)
            auxMenor = numero;
    }
    printf("\nMaior numero: %d", auxMaior);
    printf("\nMenor numero: %d", auxMenor);
}
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
void q5()
{

    // Sexo do entrevistado; Resposta de "Sim" ou "Não"; 10 pessoas entrevistadas
    // Numero de sim e não;
    // Porcentagem de mulheres de sim e porcentagem masculina de sim
    int contador = 0, simM = 0, simF = 0, naoM = 0, naoF = 0;
    char sexo[100], resposta[10];

    for (contador = 0; contador < 10; contador++)
    {
        printf("# Informe seu sexo: "); // Coletar sexo do entrevistado
        scanf("%s", sexo);

        printf("\n# Código entrevistado #%d\n", contador + 1);
        printf("# Satifeito com o novo produto?\nResponda com [S] ou [N]: "); // Coletar resposta
        scanf(" %c", &resposta[contador]);

        if (resposta[contador] == 'S' || resposta[contador] == 's')
        {
            if (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0)
            {
                simM++;
            }
            else if ((strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0))
            {
                simF++;
            }
        }
        else if (resposta[contador] == 'N' || resposta[contador] == 'n')
        {
            if (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0)
            {
                naoM++;
            }
            else if ((strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0))
            {
                naoF++;
            }
        }
        system("cls");
    }
    printf("O total de sim: %d\nO total de nao: %d\nPorcentagem de homens que votaram sim: %d%%.\nPorcentagem de mulheres que votaram sim: %d%%.", simM + simF, naoM + naoF, simM * 10, simF * 10);
}
void q6()
{
    int idade, maioresIdade = 0, somaIdade = 0, mediaIdade, cont = 0;

    printf("Idade = 0 encerra o programa!");
    while (idade != 0)
    {
        printf("Insira a idade da %da pessoa: ", cont + 1);
        scanf("%d", &idade);

        if (idade >= 18)
        {
            somaIdade += idade;
            maioresIdade++;
        }
        cont++;
    }
    mediaIdade = somaIdade / maioresIdade;
    printf("A soma de todas as pessoas maiores de idade foi: %d\nA media de idade dos maiores de idade foi: %d", somaIdade, mediaIdade);
}
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
        printf("%d, %f, %f", numeroConsumidor[i], precoKW[i], qtdKW[i]);
    }
}
