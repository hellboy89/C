#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%i", &quant);

    int vetorA[quant], vetorB[quant], somaAB[quant];

    printf("Digite os valores do vetor A: \n");
    for (i = 0; i < quant; i++) {
        scanf("%i", &vetorA[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for (i = 0; i < quant; i++) {
        scanf("%i", &vetorB[i]);
    }

    for (i = 0; i < quant; i++) {
        somaAB[i] = vetorA[i] + vetorB[i];
    }

    printf("\n\nSoma valores de A e B: \n");
    for (i = 0; i < quant; i++) {
        printf("%i \n", somaAB[i]);
    }

    return 0;
}
