#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, alcool, gasolina, diesel;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (1) {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%i", &cod);
        if (cod == 1) {
            alcool++;
        }
        else if (cod == 2) {
            gasolina++;
        }
        else if (cod == 3) {
            diesel++;
        }
        else if (cod == 4) {
            break;
        }
    }

    printf("\nMuito Obrigado!\n");
    printf("\nAlcool: %i", alcool);
    printf("\nGasolina: %i", gasolina);
    printf("\nDiesel: %i\n\n", diesel);

    return 0;
}
