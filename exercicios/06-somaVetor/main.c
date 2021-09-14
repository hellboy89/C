#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i;
    double num, soma, cont, media;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &quant);

    double vet[quant];

    soma = 0;
    cont = 0;

    for ( i = 0 ; i < quant ; i++ ) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
        cont++;
    }

    printf("\n\nValores = ");
    for ( i = 0 ; i < quant ; i++ ){
        printf("%.1lf  ", vet[i]);
    }

    media = soma / cont;
    printf("\nSoma = %.2lf", soma);
    printf("\nMedia = %.2lf", media);

    return 0;
}
