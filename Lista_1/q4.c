#include <stdio.h>
int main()
{
    float raio, perimetro, area, pi = 3.14;
    printf("Entre com o raio: ");
    scanf("%f", &raio);

    // Contas da questão
    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    // Fim das contas
    printf("O raio eh %.2f.\nSeu perimetro eh %.2f e sua area eh %.2f.", raio, perimetro, area);

    // Pausa o sistema
    printf("\n");
    system("pause");
}