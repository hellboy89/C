#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, linha, coluna;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%i", &linha);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%i", &coluna);

    int matrizA[linha][coluna], matrizB[linha][coluna];

    printf("\nDigite os valores da Matriz A: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matrizA[i][j]);
        }
    }

    printf("\nDigite os valores da Matriz B: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &matrizB[i][j]);
        }
    }

    printf("\n\nValores digitados Matriz A: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%i  ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nValores digitados Matriz B: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%i  ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Soma: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%i ", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
