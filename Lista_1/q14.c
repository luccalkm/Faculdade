#include <stdio.h>
int main()
{
    float valorCarro;
    char adicionais, arCondicionado, pinturaMetalica, vidroEletrico, direcaoHidraulica;
    ;
    // Valor inicial
    printf("Insira o valor inicial do carro: ");
    scanf("%f", &valorCarro);
    // Adicionar itens ao carro
    printf("Para adicionais ao carro, responda.\nDeseja colocar adicionais ao seu carro?\nDigite S/N: ");
    scanf(" %c", &adicionais);

    if (adicionais == 'S' || adicionais == 's') // COM ADICIONAL
    {
        // Adicionar ar condicionado
        printf("\nGostaria de adicionar o ar-condicionado ao seu carro por R$ 1750,00?\nS/N -> ");
        scanf(" %c", &arCondicionado);
        if (arCondicionado == 'S' || arCondicionado == 's')
        {
            valorCarro += 1750;
            printf("\n# Esse eh o valor atual do seu carro: %.2f #\n", valorCarro);
        }
        else if (arCondicionado == 'N' || arCondicionado == 'n')
        {
            printf("\nAr condicionado NAO adicionado, proximo item!\n");
        }

        // Adicionar Pintura metálica
        printf("Gostaria de adicionar a pintura metalica ao seu carro por R$ 800,00?\nS/N -> ");
        scanf(" %c", &pinturaMetalica);
        if (pinturaMetalica == 'S' || pinturaMetalica == 's')
        {
            valorCarro += 800;
            printf("\n# Esse eh o valor atual do seu carro: %.2f #\n", valorCarro);
        }
        else if (pinturaMetalica == 'N' || pinturaMetalica == 'n')
        {
            printf("\nPintura metalica NAO adicionada, proximo item!\n");
        }

        // Adicionar Vidro elétrico
        printf("Gostaria de adicionar a vidro eletrico ao seu carro por R$ 1200,00?\nS/N -> ");
        scanf(" %c", &vidroEletrico);
        if (vidroEletrico == 'S' || vidroEletrico == 's')
        {
            valorCarro += 1200;
            printf("\n# Esse eh o valor atual do seu carro: %.2f #\n", valorCarro);
        }
        else if (vidroEletrico == 'N' || vidroEletrico == 'n')
        {
            printf("\nVidro Eletrico NAO adicionado, proximo item!\n");
        }

        // Adicionar Direcao Hidraulica
        printf("Gostaria de adicionar direcao hidraulica ao seu carro por R$ 2000,00?\nS/N -> ");
        scanf(" %c", &direcaoHidraulica);
        if (direcaoHidraulica == 'S' || direcaoHidraulica == 's')
        {
            valorCarro += 2000;
            printf("\n# Esse eh o valor atual do seu carro: %.2f #\n", valorCarro);
        }
        else if (direcaoHidraulica == 'N' || direcaoHidraulica == 'n')
        {
            printf("\nDirecao Hidraulica NAO adicionado, proximo item!\n");
        }
        printf("O preco final do seu carro eh R$ %.2f", valorCarro);
    }
    else if (adicionais == 'N' || adicionais == 'n') // SEM ADICIONAL
    {
        printf("O preco final do seu carro eh R$ %.2f", valorCarro);
    }
    // Pausa programa
    printf("\n");
    system("pause");
}