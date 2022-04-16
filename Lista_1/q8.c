#include <stdio.h>
int main()
{
    float nota1, nota2, media;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6)
    {
        printf("\nNota 1: %.1f\nNota 2: %.1f\nMedia: %.1f\nParabens, voce esta aprovado.", nota1, nota2, media);
    }
    else if (media < 5)
    {
        printf("\nNota 1: %.1f\nNota 2: %.1f\nMedia: %.1f\nVoce esta reprovado.", nota1, nota2, media);
    }
    else
    {
        printf("\nNota 1: %.1f\nNota 2: %.1f\nMedia: %.1f\nVoce podera fazer a AV3.", nota1, nota2, media);
    }
}
