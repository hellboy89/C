#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaIni, horaFin;

    printf("Hora Inicial: ");
    scanf("%i", &horaIni);
    printf("Hora Final: ");
    scanf("%i", &horaFin);

    if (horaIni < horaFin) {
        printf("\nO jogo durou %i hora(s)\n", horaFin - horaIni);
    }
    else {
        printf("\nO jogo durou %i hora(s)\n", 24- (horaIni - horaFin));
    }

    return 0;
}
