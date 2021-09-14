#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double coefA, coefB, coefC, x, x1, x2, raizX;

    printf("Coeficiente A: ");
    scanf("%lf", &coefA);
    printf("Coeficiente B: ");
    scanf("%lf", &coefB);
    printf("Coeficiente C: ");
    scanf("%lf", &coefC);

    x = (pow(coefB, 2) - (4 * coefA * coefC));

    if (x < 0)
    {
        printf("\nEsta equacao nao possui raizes reais.\n");
    }
    else
    {
        raizX = sqrt(x);
        x1 = (- coefB + raizX) / (2 * coefA);
        x2 = (- coefB - raizX) / (2 * coefA);
        printf("\nX1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }


    return 0;
}
