#include <stdio.h>
int main()
{
    float num1, num2, resposta;
    char sinal;

    printf("\nQual  operacao deseja fazer?\n[+] Soma\n[-] Subtracao\n[*] Multiplicacao\n[/] Divisao\n[^] Potencia\n[#] Raiz\nEscolha: ");
    scanf(" %c", &sinal);
    printf("Insira o primeiro numero de sua conta: ");
    scanf("%f", &num1);
    printf("\nInsira o segundo numero de sua conta: ");
    scanf("%f", &num2);

    switch (sinal)
    {
    case '+':
        resposta = num1 + num2;
        printf("\nTemos: %.2f + %.2f = %.2f", num1, num2, resposta);
        break;
    case '-':
        resposta = num1 - num2;
        printf("\nTemos: %.2f - %.2f = %.2f", num1, num2, resposta);
        break;
    case '*':
        resposta = num1 * num2;
        printf("\nTemos: %.2f * %.2f = %.2f", num1, num2, resposta);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Conta invalida! Nao eh permitido divisao por 0.");
            break;
        }
        else
        {
            resposta = num1 / num2;
            printf("\nTemos: %.2f / %.2f = %.2f", num1, num2, resposta);
            break;
        }
    case '^':
        resposta = pow(num1, num2);
        printf("\nTemos: %.2f ^ %.2f = %.2f", num1, num2, resposta);
        break;
    case '#':

        resposta = pow(num1, 1 / num2);
        printf("\nTemos: raiz de %.2f a %.fa = %.2f", num1, num2, resposta);
        break;
    default:
        printf("\nAlgo aconteceu!!\nPor favor, tente novamente!");
    }

    // Pausa programa
    printf("\n");
    system("pause");
}