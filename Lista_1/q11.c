#include <stdio.h>
int main()
{
    char tipoCliente[20], idConta[10];
    float metroCubico, valorFinal = 0;

    printf("\nInsira o ID de sua conta: ");
    scanf("%s", idConta);
    printf("\nQual o tipo do consumidor: ");
    scanf("%s", tipoCliente);
    printf("\nPor fim, informe o consumo de água/metro cubico: ");
    scanf("%f", &metroCubico);

    if (strcmp(tipoCliente, "Residencial") == 0 || strcmp(tipoCliente, "residencial") == 0)
    {
        valorFinal = 5 + metroCubico * 0.05;
        printf("\nID: %s\nValor de pagamento: %.2f", idConta, valorFinal);
    }
    else if (strcmp(tipoCliente, "Comercial") == 0 || strcmp(tipoCliente, "comercial") == 0)
    {
        if (metroCubico <= 80 && metroCubico > 0)
        {
            valorFinal = 500;
            printf("\nID: %s\nValor de pagamento: %.2f", idConta, valorFinal);
        }
        else
        {
            valorFinal = 500 + (metroCubico - 80) * 0.25;
            printf("\nID: %s\nValor de pagamento: %.2f", idConta, valorFinal);
        }
    }
    else if (strcmp(tipoCliente, "Industrial") == 0 || strcmp(tipoCliente, "industrial") == 0)
    {
        if (metroCubico <= 100 && metroCubico > 0)
        {
            valorFinal = 800;
            printf("\nID: %s\nValor de pagamento: %.2f", idConta, valorFinal);
        }
        else
        {
            valorFinal = 800 + (metroCubico - 100) * 0.04;
            printf("\nID: %s\nValor de pagamento: %.2f", idConta, valorFinal);
        }
    }

    // Pausa programa
    printf("\n");
    system("pause");
}
