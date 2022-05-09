#include <stdio.h>
int main()
{
    char codigoConsumidor[10];
    float total, valorKW, quantidadeKW, valorMin = 21.23;

    printf("Codigo do consumidor (até 10 caracteres): ");
    scanf("%s", codigoConsumidor);
    printf("Quantidade consumida: ");
    scanf("%f", &quantidadeKW);
    printf("Valor Quilowatt: ");
    scanf("%f", &valorKW);

    total = valorKW * quantidadeKW;
    total = (total > valorMin) ? printf("\nO codigo do consumidor: #%s\nTotal a pagar %.2f", codigoConsumidor, total) : printf("\nO codigo do consumidor: #%s\nTotal a pagar %.2f", codigoConsumidor, valorMin);

    // Pausa o programa
    printf("\n");
    system("pause");
}