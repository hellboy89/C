#include <stdio.h>
#include <stdlib.h>

int main()
{
    double prod1, prod2, prod3, prod4, prod5, quantComp, codProd, valorPag;

    printf("Codigo do produto comprado: ");
    scanf("%lf", &codProd);
    if (codProd > 0 && codProd < 6) {
        printf("Quantidade comprada: ");
        scanf("%lf", &quantComp);
    }

    if (codProd == 1) {
        prod1 = 5.00;
        valorPag = prod1 * quantComp;
    }
    else if (codProd == 2) {
        prod2 = 3.50;
        valorPag = prod2 * quantComp;
    }
    else if (codProd == 3) {
        prod3 = 4.80;
        valorPag = prod3 * quantComp;
    }
    else if (codProd == 4) {
        prod4 = 8.90;
        valorPag = prod4 * quantComp;
    }
    else if (codProd == 5) {
        prod5 = 7.32;
        valorPag = prod5 * quantComp;
    }
    else {
        printf("\nCódigo incorreto!\n");
    }

    if (codProd > 0 && codProd < 6) {
        printf("\nValor a pagar: R$ %.2lf.\n", valorPag);
    }

    return 0;
}
