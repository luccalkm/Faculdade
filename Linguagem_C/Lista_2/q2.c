#include <stdio.h>
int main()
{
    int a, soma = 0;

    while (a != 0)
    {
        printf("Entre com seus numeros: ");
        scanf("%d", &a);
        soma += a;
    }
    printf("Soma total: %d", soma);
    printf("\n");
    system("pause");
}