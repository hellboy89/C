#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dist1, dist2, dist3, maiorDist;

    printf("Digite as tres distancias: \n");
    printf(" ");
    scanf("%lf", &dist1);
    printf(" ");
    scanf("%lf", &dist2);
    printf(" ");
    scanf("%lf", &dist3);

    if (dist1 > dist2 && dist1 > dist3) {
        maiorDist = dist1;
    }
    else if (dist2 > dist1 && dist2 > dist3) {
        maiorDist = dist2;
    }
    else {
        maiorDist = dist3;
    }

    printf("\nMaior Distancia = %.2lf.\n", maiorDist);

    return 0;
}
