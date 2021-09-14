#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorA, valorB, valorC, areaQuad, areaTrian, areaTrap;

    printf("Digite a medida A: ");
    scanf("%lf", &valorA);
    printf("Digite a medida B: ");
    scanf("%lf", &valorB);
    printf("Digite a medida C: ");
    scanf("%lf", &valorC);

    areaQuad = pow(valorA, 2);
    areaTrian = (valorA * valorB) / 2;
    areaTrap = (valorA + valorB) * valorC / 2;

    printf("\nArea do Quadrado = %.4lf\n", areaQuad);
    printf("Area do Triangulo = %.4lf\n", areaTrian);
    printf("Area do Trapezio = %.4lf\n", areaTrap);

    return 0;
}
