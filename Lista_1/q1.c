#include <stdio.h>
int main()
{
    int a, b, aux = 0;
    printf("Valor para a: ");
    scanf("%d", &a); // entrada valor 1
    printf("Valor para b: ");
    scanf("%d", &b); // entrada valor 2
    aux = a;
    a = b;
    b = aux;
    printf("Valores trocados: a = %d e b = %d.", a, b);

    // Pausar programa
    printf("\n");
    system("pause");
}