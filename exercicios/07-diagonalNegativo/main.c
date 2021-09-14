#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, j, quantNeg;

    printf("Qual a ordem da matriz? ");
    scanf("%i", &quant);

    int mat[quant][quant];

    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    quantNeg = 0;

    printf("\n\nValores Digitados: \n");
    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("%i  ", mat[i][j]);
            if (mat[i][j] < 0) {
                quantNeg++;
            }
        }
        printf("\n");
    }

    printf("\nDiagonal Principal: ");
    for (i = 0; i < quant; i++) {
        printf("%i ", mat[i][i]);
    }

    printf("\nQuantidade de Negativos = %i .\n", quantNeg);

    return 0;
}
