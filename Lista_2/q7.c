#include <stdio.h>
int main()
{
    int numeroConsumidor, contaPessoas = 0;
    float precoKW, qtdKW, maior = 0, menor = 0, mediaConsumo = 0;

    printf("Inserir um numero do consumidor zero (0) encerra o programa.\n");

    do
    {
        printf("\nInsira o numero do consumidor: ");
        scanf("%d", &numeroConsumidor);

        if (numeroConsumidor != 0)
        {
            printf("Insira o preco do do kWh: ");
            scanf("%f", &precoKW);
            printf("Insira a quantidade gasta de kWh no mes: ");
            scanf("%f", &qtdKW);

            /* Total a pagar do consumidor da vez */
            float total = 0;
            total = precoKW * qtdKW;
            printf("\nO total apagar do consumidor #%d: %.f\n", numeroConsumidor, total);

            /* Maior e menor consumos verificados ao longo das PessoascontaPessoas */
            if (qtdKW > maior)
            {
                maior = qtdKW;
            }
            // Forçar valor inicial de "menor" dentro do loop
            if (menor == 0)
            {
                menor = qtdKW;
            }
            else if (qtdKW < menor)
            {
                menor = qtdKW;
            }

            /* Soma geral dos consumos */
            mediaConsumo += qtdKW;
            contaPessoas++;
        }
        else
        {
            break;
        }
    } while (numeroConsumidor != 0);
    mediaConsumo = mediaConsumo / contaPessoas;
    printf("\nMaior dos Consumos # %.2f\nMenor dos Consumos # %.2f\nMedia dos Consumos # %.2f\n", maior, menor, mediaConsumo);
    printf("\n");
    system("pause");
}
