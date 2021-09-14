#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numerador, denominador, i, quantRep, result;

    printf("Quantos casos voce vai digitar? ");
    scanf("%lf", &quantRep);

    for ( i = 1 ; i <= quantRep ; i++ ) {
        printf("Entre com o numerador: ");
        scanf("%lf", &numerador);
        printf("Entre com o denominador: ");
        scanf("%lf", &denominador);
        result = numerador / denominador;
        if ( denominador > 0 || denominador < 0 ) {
            printf("\n Resultado = %.2lf.\n", result);
        }
        else if ( denominador == 0 ) {
            printf("\nDivisao Impossivel\n");
        }
    }



    return 0;
}
