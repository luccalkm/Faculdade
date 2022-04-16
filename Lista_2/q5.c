#include <stdio.h>
int main()
{

    // Sexo do entrevistado; Resposta de "Sim" ou "Não"; 10 pessoas entrevistadas
    // Numero de sim e não;
    // Porcentagem de mulheres de sim e porcentagem masculina de sim
    int contador = 0, simM = 0, simF = 0, naoM = 0, naoF = 0;
    char sexo[100], resposta[10];

    for (contador = 0; contador < 10; contador++)
    {
        printf("# Informe seu sexo: "); // Coletar sexo do entrevistado
        scanf("%s", sexo);

        printf("\n# Código entrevistado #%d\n", contador + 1);
        printf("# Satifeito com o novo produto?\nResponda com [S] ou [N]: "); // Coletar resposta
        scanf(" %c", &resposta[contador]);

        if (resposta[contador] == 'S' || resposta[contador] == 's')
        {
            if (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0)
            {
                simM++;
            }
            else if ((strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0))
            {
                simF++;
            }
        }
        else if (resposta[contador] == 'N' || resposta[contador] == 'n')
        {
            if (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0)
            {
                naoM++;
            }
            else if ((strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "feminino") == 0))
            {
                naoF++;
            }
        }
        system("cls");
    }
    printf("O total de sim: %d\nO total de nao: %d\nPorcentagem de homens que votaram sim: %d%%.\nPorcentagem de mulheres que votaram sim: %d%%.", simM + simF, naoM + naoF, simM * 10, simF * 10);
}