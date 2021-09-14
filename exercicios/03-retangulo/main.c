#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, alt, area, perimetro, diagonal;

    printf("Base do Retangulo: ");
    scanf("%lf", &base);

    printf("Altura do Retangulo: ");
    scanf("%lf", &alt);

    area = base * alt;
    perimetro = (base + alt) * 2;
    // Para calcular potenciação utilizado o POW.
    diagonal = sqrt(pow(base, 2) + pow(alt, 2));

    printf("\nArea = %.4lf", area);
    printf("\nPerimetro = %.4lf", perimetro);
    printf("\nDiagonal = %.4lf\n", diagonal);

    return 0;
}
