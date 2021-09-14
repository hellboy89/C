#include <stdio.h>
#include <stdlib.h>

int main()
{
    char escalaTemp;
    double tempFahr, tempCel;

    printf("Você vai digitar a temperatura em qual escala(c/f)? ");
    scanf("%c", &escalaTemp);

    if (escalaTemp == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &tempFahr);
        tempCel = (tempFahr - 32) / 1.8000;
        printf("\nTemperatura equivalente em Celsius: %.2lf.\n", tempCel);
    }
    else if (escalaTemp == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &tempCel);
        tempFahr = (tempCel * 1.80) + 32.00;
        printf("\nTemperatura equivalente em Fahrenheit: %.2lf.\n", tempFahr);
    }
    else {
        printf("Valor incorreto!");
    }

    return 0;
}
