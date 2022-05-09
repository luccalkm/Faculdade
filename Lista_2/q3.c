#include <stdio.h>
int main()
{
    int numero, auxMaior = 0, auxMenor = 0;

    printf("Entre seu numero: ");
    scanf("%d", &numero);

    auxMenor = numero;

    for (int i = 0; i < 20; i++)
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
    printf("\n");
    system("pause");
}