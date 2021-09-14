#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, j, escLinha, escColuna;

    printf("Qual a ordem da matriz? ");
    scanf("%i", &quant);

    double matriz[quant][quant], somaPositivos = 0;

    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("\n\nValores Digitados: \n");
    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("%.1lf  ", matriz[i][j]);
            if (matriz[i][j] > 0) {
                somaPositivos = somaPositivos + matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("\n\nSoma dos Positivos = %.1lf.", somaPositivos);

    printf("\n\nEscolha uma linha: ");
    scanf("%i", &escLinha);
    for (i = 0; i < quant; i++) {
        printf("%.1lf  ", matriz[escLinha][i]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%i", &escColuna);
    for (i = 0; i < quant; i++) {
        printf("%.1lf  ", matriz[i][escColuna]);
    }

    printf("\n\nDiagonal Principal: ");
    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            if (i == j) {
                printf("%.1lf ", matriz[i][j]);
            }
        }
    }

    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = pow(matriz[i][j], 2);
            }
        }
        printf("\n");
    }

    printf("\n\nMatriz Alterada: \n");
    for (i = 0; i < quant; i++) {
        for (j = 0; j < quant; j++) {
            printf("%.1lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
