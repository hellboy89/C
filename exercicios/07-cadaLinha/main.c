#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, j, maior;

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
            printf("%i   ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior Elemento de Cada Linha: \n");
    for (i = 0; i < quant; i++) {
        maior = matriz[0][0];
        for (j = 0; j < quant; j++) {
            if (matriz [i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        printf("%i \n", maior);
    }



    return 0;
}
