#include <stdio.h>
int main()
{
    char categoria[20];
    float valorComum;
    int diaSemana;

    // Entrada da categoria
    printf("Qual a categoria do filme? Comum ou Lancamento: ");
    scanf("%s", categoria);

    // Definição do dia da semana
    printf("\nInforme o dia da semana do aluguel.\n(1) Domingo\n(2) Segunda\n(3) Terca\n(4) Quarta\n(5) Quinta\n(6) Sexta\n(7) Sabado\nEscolha: ");
    scanf("%d", &diaSemana);

    // Preço da fita
    printf("\nInsira o valor da fita: ");
    scanf("%f", &valorComum);

    switch (diaSemana)
    { // Preços normais domingo, quarta, sexta e sábado (1, 4, 6 e 7)
    case 1:
    case 4:
    case 6:
    case 7:
        if (strcmp(categoria, "Comum") == 0 || strcmp(categoria, "comum") == 0)
        {
            printf("\nO valor final a ser pago pela fita eh de %.2f reais", valorComum);
            break;
        }
        else if (strcmp(categoria, "Lancamento") == 0 || strcmp(categoria, "lancamento") == 0)
        {
            valorComum *= 1.15;
            printf("\nO valor final a ser pago pela fita eh de %.2f reais", valorComum);
            break;
        } // Preços com desconto na Segunda, terça e quinta
    case 2:
    case 3:
    case 5:
        if (strcmp(categoria, "Comum") == 0 || strcmp(categoria, "comum") == 0) // Comparação string pra categoria "Comum"
        {
            valorComum *= 0.6;
            printf("\nO valor final a ser pago pela fita eh de %.2f reais", valorComum);
            break;
        }
        else if (strcmp(categoria, "Lancamento") == 0 || strcmp(categoria, "lancamento") == 0) // Comparação string pra categoria "Lançamento"
        {
            valorComum *= 0.69;
            printf("\nO valor final a ser pago pela fita eh de %.2f reais", valorComum);
            break;
        }

    default:
        printf("\nERROR: Algo deu errado!");
    }
    printf("\n");
    system("pause");
}