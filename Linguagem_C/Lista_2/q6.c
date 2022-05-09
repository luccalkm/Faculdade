#include <stdio.h>
int main()
{
    int idade, maioresIdade = 0, somaIdade = 0, mediaIdade, cont = 0;

    printf("Idade = 0 encerra o programa!\n");
    do
    {
        printf("Insira a idade da %da pessoa: ", cont + 1);
        scanf("%d", &idade);

        if (idade >= 18)
        {
            somaIdade += idade;
            maioresIdade++;
        }
        cont++;
    } while (idade != 0);

    mediaIdade = somaIdade / maioresIdade;
    printf("A soma de todas as pessoas maiores de idade foi: %d\nA media de idade dos maiores de idade foi: %d", somaIdade, mediaIdade);
    printf("\n");
    system("pause");
}