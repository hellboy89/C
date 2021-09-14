#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raioCirc, area, pi;

    pi = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raioCirc);

    area = pi * (pow(raioCirc, 2));

    printf("\nArea = %.3lf\n", area);

    return 0;
}
