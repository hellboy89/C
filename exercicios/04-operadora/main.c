#include <stdio.h>
#include <stdlib.h>

int main()
{
    double quantMinGast, valExcFranq, valPag;

    printf("Digite a quantidade de minutos: ");
    scanf("%lf", &quantMinGast);
    valPag = 50.00;

    if (quantMinGast <= 100) {
        valPag = valPag;
    }
    else if (quantMinGast > 100) {
        valExcFranq = quantMinGast - 100;
        valPag = (valExcFranq * 2) + 50;
    }

    printf("\nValor a pagar: R$ %.2lf.\n", valPag);

    return 0;
}
