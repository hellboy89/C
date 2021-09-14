#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distPer, combGas, consMed;

    printf("Distancia Percorrida: ");
    scanf("%lf", &distPer);
    printf("Combustivel Gasto: ");
    scanf("%lf", &combGas);

    consMed = distPer / combGas;

    printf("\nConsumo Medio = %.3lf.\n", consMed);


    return 0;
}
