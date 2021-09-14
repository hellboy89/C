#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num, media, cont, soma;

    num = 1;

    printf("Digite as idades: \n");

    cont = -1;
    soma = 0;

    while (num >= 0) {
        scanf("%2lf", &num);
        cont++;
        if (num > 0) {
            soma = soma + num;
        }
    }

    if (soma > 0) {
        printf("\nMedia = %.2lf.\n", soma / cont);
    }
    else {
        printf("\nIMPOSSIVEL CALCULAR.\n");
    }

    return 0;
}
