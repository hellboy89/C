#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorX, valorY;

    printf("Valor de X: ");
    scanf("%lf", &valorX);
    printf("Valor de Y: ");
    scanf("%lf", &valorY);

    if (valorX > 0 && valorY > 0) {
        printf("\nQ1\n");
    }
    else if (valorX < 0 && valorY < 0) {
        printf("\nQ3\n");
    }
    else if (valorX > 0 && valorY < 0) {
        printf("\nQ4\n");
    }
    else if (valorX < 0 && valorX > 0) {
        printf("\nQ2\n");
    }
    else if (valorX == 0 && valorY == 0) {
        printf("\nOrigem\n");
    }
    else if (valorX != 0 && valorY == 0) {
        printf("\nEixo X\n");
    }
    else if (valorX == 0 && valorY != 0) {
        printf("\nEixo Y\n");
    }


    return 0;
}
