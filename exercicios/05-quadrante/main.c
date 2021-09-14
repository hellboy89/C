#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorX, valorY;

    while (1) {
        printf("Digite os valores das coordenadas X e Y: \n");
        scanf("%i", &valorX);
        scanf("%i", &valorY);
        if (valorX > 0 && valorY > 0) {
            printf("\nQuadrante Q1.\n\n");
        }
        else if (valorX > 0 && valorY < 0) {
            printf("\nQuadrante Q4.\n\n");
        }
        else if (valorX < 0 && valorY > 0) {
            printf("\nQuadrante Q2.\n\n");
        }
        else if (valorX < 0 && valorY < 0) {
            printf("\nQuadrante Q3.\n\n");
        }
        else if (valorX == 0 || valorY == 0) {
            break;
        }
    }

    return 0;
}
