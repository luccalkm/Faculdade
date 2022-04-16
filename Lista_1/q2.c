#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Insira um numero para ver seu antecessor e seu sucessor: ");
    scanf("%d", &a); // entrada numero
    printf("\n # Antecessor: %d\n # Numero escolhido: %d\n # Sucessor: %d", a - 1, a, a + 1);
    // Pausa sistema
    printf("\n");
    system("pause");
}