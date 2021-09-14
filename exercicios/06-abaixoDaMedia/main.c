#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i;

    printf("Quantos elementos vai ter o vetor?");
    scanf("%i", &quant);

    double num[quant], media, somaNum;

    for (i = 0; i < quant; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &num[i]);
    }

    somaNum = 0;
    for (i = 0; i < quant; i++) {
        somaNum = somaNum + num[i];
    }

    media = somaNum / quant;

    printf("\n\nMedia do vetor = %.3lf", media);

    printf("\nElementos abaixo da media: \n");
    for (i = 0; i < quant; i++) {
        if (num[i] < media) {
            printf("%.1lf \n", num[i]);
        }
    }

    return 0;
}
