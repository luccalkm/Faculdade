#include <stdio.h>
int main()
{
    int numero, i = 1;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    while (i < 11)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
    printf("\n");
    system("pause");
}