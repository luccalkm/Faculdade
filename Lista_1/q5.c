#include <stdio.h>
int main()
{
    float grausC, grausF;
    printf("Celsius -> Fahrenheit\nDigite em graus Celsius: ");
    scanf("%f", &grausC);

    // conversão
    grausF = (9 * grausC + 160) / 5;

    // fim conversão
    printf("\nLogo, %.2f graus Celsius correspondem a %.2f graus Fahrenheit.", grausC, grausF);

    // Pausa sistema
    printf("\n");
    system("pause");
}