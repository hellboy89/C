#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i, maior, posicao;

    printf("Quantos numeros vc vai digitar? ");
    scanf("%i", &quant);

    int num[quant];

    for (i = 0; i < quant ; i++) {
        printf("Digite um numero: ");
        scanf("%i", &num[i]);
    }

    maior = num[0];
    for (i = 0; i < quant; i++) {
        //if (maior > num[i]);
        if (num[i] > maior) {
            maior = num[i];
            posicao = i;
        }
    }

    printf("\n\nMaior valor = %i.\n", maior);
    printf("Posicao = %i.\n", posicao);

    return 0;
}
