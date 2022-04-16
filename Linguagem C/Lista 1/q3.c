#include <stdio.h>
int main()
{
    float gasto, taxa = 1.10;
    printf("Informe o gasto total do cliente: ");
    scanf("%f", &gasto); // Definir gasto do cliente
    printf("O valor a ser pago, com a taxa eh de %.2f", (gasto * taxa));
    // Pausa sistema
    printf("\n");
    system("pause");
}