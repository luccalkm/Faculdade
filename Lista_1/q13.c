#include <stdio.h>
int main()
{
    int i;
    float a, b, c, maior, medio, menor;
    printf("Escolha entre crescente(1), decrescente(2) e o maior entre os outros (3): ");
    scanf("%d", &i);
    printf("Numero #1: ");
    scanf("%f", &a);
    printf("Numero #2: ");
    scanf("%f", &b);
    printf("Numero #3: ");
    scanf("%f", &c);

    if (a > b && b > c)
    {
        maior = a;
        medio = b;
        menor = c;
    }
    else if (a > c && c > b)
    {
        maior = a;
        medio = c;
        menor = b;
    }
    else if (b > a && a > c)
    {
        maior = b;
        medio = a;
        menor = c;
    }
    else if (b > c && c > a)
    {
        maior = b;
        medio = c;
        menor = a;
    }
    else if (c > a && a > b)
    {
        maior = c;
        medio = a;
        menor = b;
    }
    else if (c > b && b > a)
    {
        maior = c;
        medio = b;
        menor = a;
    }

    switch (i)
    {
    case 1:
        printf("%.f > %.f > %.f", menor, medio, maior);
        break;
    case 2:
        printf("%.f > %.f > %.f", maior, medio, menor);
        break;
    case 3:
        printf("%.f > %.f > %.f", medio, maior, menor);
        break;
    default:
        printf("Alternativa invalida. Numero escolhido nao eh 1, 2 nem 3.");
    }
    // Pausa programa
    printf("\n");
    system("pause");
}
