#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int quant, i;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%i", &quant);

    double altura[quant], menorAlt, maiorAlt, somaAltMulheres, media, contMulheres, contHomens;
    char genero[quant];

    for (i = 0; i < quant; i++) {
        printf("Altura da %i a pessoa: ", i+1);
        scanf("%lf", &altura[i]);
        printf("Genero da %i a pessoa: ", i+1);
        limpar_entrada();
        scanf("%c", &genero[i]);
        printf("\n");
    }

    menorAlt = altura[0];
    maiorAlt = altura[0];
    contMulheres = 0;
    contHomens = 0;
    somaAltMulheres = 0;
    for (i = 0; i < quant; i++) {
        if (altura[i] < menorAlt) {
            menorAlt = altura[i];
        }
        if (altura[i] > maiorAlt) {
            maiorAlt = altura[i];
        }
        if (genero[i] == 'f') {
            contMulheres++;
            somaAltMulheres = somaAltMulheres + altura[i];
        }
        if (genero[i] == 'm') {
            contHomens++;
        }
    }

    media = somaAltMulheres / contMulheres;
    printf("\n\nMenor Altura = %.2lf.\n", menorAlt);
    printf("Maior Altura = %.2lf.\n", maiorAlt);
    printf("Media das alturas das mulheres = %.2lf.\n", media);
    printf("Numero de homens = %.0lf.\n", contHomens);

    return 0;
}
