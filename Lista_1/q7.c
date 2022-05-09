#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    if (num1 == num2)
    {
        printf("Primeiro = Segundo");
    }
    else if (num1 > num2)
    {
        printf("\nPrimeiro (%.1f) > Segundo (%.1f)", num1, num2);
    }
    else
    {
        printf("\nPrimeiro (%.1f)< Segundo (%.1f)", num1, num2);
    }

    // Pausa programa
    printf("\n");
    system("pause");
}