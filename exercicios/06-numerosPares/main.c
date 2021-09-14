#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, cont, somaPar;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &quant);

    int num[quant];

    for (i = 0; i < quant; i++) {
        printf("Digite um numero: ");
        scanf("%i", &num[i]);
    }

    somaPar = 0;
    printf("\n\nNumeros Pares: \n");
    for ( i = 0; i < quant; i++) {
        if ( num[i] % 2 == 0) {
            printf("%i  ", num[i]);
            somaPar++;
        }
    }

    printf("\n\nQuantidade de Pares = %i.\n", somaPar);

    return 0;
}
