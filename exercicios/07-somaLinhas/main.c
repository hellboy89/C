#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%i", &linhas);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%i", &colunas);

    int mat[linhas][colunas];
    int somaLinhas[linhas];

    for (i = 0; i < linhas; i++) {
        printf("Digite os elementos da %i a linha: \n", i+1);
        for (j = 0; j < colunas; j++) {
            printf("");
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n\nValores digitados: \n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        somaLinhas[i] = 0;
        for (j = 0; j < colunas; j++) {
            somaLinhas[i] = somaLinhas[i] + mat[i][j];
        }

    }

    printf("\n\nVetor Gerado: \n");
    for (i = 0; i < linhas; i++) {
        printf("%i \n", somaLinhas[i]);
    }

    return 0;
}
