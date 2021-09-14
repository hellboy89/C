#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, j, somaDiag;

    printf("Qual a ordem da matriz? ");
    scanf("%i", &quant);

    int matriz[quant][quant];

    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\n\nValores Digitados: \n");
    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    somaDiag = 0;
    printf("\nSoma dos elemtentos acima da diagonal = ");
    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            if (i < j) {
                somaDiag = somaDiag + matriz[i][j];
            }
        }
    }
    printf("%i", somaDiag);

    return 0;
}
