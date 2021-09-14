#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%i", &linhas);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%i", &colunas);

    int matriz[linhas][colunas], valNeg[linhas][colunas];

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\n\nValores Digitados: \n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%i  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nValores Negativos: \n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] < 0) {
                printf("%i \n", matriz[i][j]);
            }
        }
    }


    return 0;
}
