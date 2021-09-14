#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i;
    double media, somaPar, quantPar;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%i", &quant);

    int num[quant];

    for (i = 0; i < quant; i++) {
        printf("Digite um numero: ");
        scanf("%i", &num[i]);
    }

    somaPar = 0;
    quantPar = 0;
    for (i = 0; i < quant; i++) {
        if (num[i] % 2 == 0) {
            somaPar = somaPar + num[i];
            quantPar++;
        }
    }

    media = somaPar / quantPar;

    if (quantPar > 0) {
        printf("\n\nMedia dos Pares = %.1lf.\n", media);
    }
    else {
        printf("\n\nNenhum numero par.\n");
    }

    return 0;
}
