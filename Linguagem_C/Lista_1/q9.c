#include <stdio.h>
int main()
{
    float n1, n2, n3;
    printf("Numero #1: ");
    scanf("%f", &n1);
    printf("Numero #2: ");
    scanf("%f", &n2);
    printf("Numero #3: ");
    scanf("%f", &n3);

    if (n1 > n2 && n2 > n3)
    {
        printf("\n%.f > %.f > %.f\nn1 > n2 > n3", n1, n2, n3);
    }
    else if (n1 > n3 && n3 > n2)
    {
        printf("\n%.f > %.f > %.f\nn1 > n3 > n2", n1, n3, n2);
    }
    else if (n2 > n1 && n1 > n3)
    {
        printf("\n%.f > %.f > %.f\nn2 > n1 > n3", n2, n1, n3);
    }
    else if (n2 > n3 && n3 > n1)
    {
        printf("\n%.f > %.f > %.f\nn2 > n3 > n1", n2, n3, n1);
    }
    else if (n3 > n1 && n1 > n2)
    {
        printf("\n%.f > %.f > %.f\nn3 > n1 > n2", n3, n1, n2);
    }
    else if (n3 > n2 && n2 > n1)
    {
        printf("\n%.f > %.f > %.f\nn3 > n2 > n1", n3, n2, n1);
    }
    printf("\n");
    system("pause");
}