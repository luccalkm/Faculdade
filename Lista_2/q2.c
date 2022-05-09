#include <stdio.h>
int main()
{
    int n, soma = 0;

    while (n != 0)
    {
        printf("Entre com seus numeros: ");
        scanf("%d", &n);
        soma += n;
    }
    printf("Soma total: %d", soma);
    printf("\n");
    system("pause");
}