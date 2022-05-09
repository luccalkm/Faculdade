#include <stdio.h>
int main()
{
    int numero, k = 1;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    while (k < 11)
    {
        printf("%d x %d = %d\n", numero, k, numero * k);
        k++;
    }
    printf("\n");
    system("pause");
}