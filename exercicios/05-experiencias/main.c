#include <stdio.h>
#include <stdlib.h>

int main()
{
    double percCoelhos, percRatos, percSapos, i, coelhos, ratos, sapos, total, quant, quantCob ;
    char tipoCob;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%lf", &quant);
    total = 0;
    coelhos = 0;
    ratos = 0;
    sapos = 0;

    for ( i = 1 ; i <= quant ; i++ ) {
        printf("Quantidade de cobaias: ");
        scanf("%lf", &quantCob);
        printf("Tipo de cobaia: ");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &tipoCob);
        total = total + quantCob;
        if (tipoCob == 'c') {
            coelhos = coelhos + quantCob;
        }
        else if (tipoCob == 'r') {
            ratos = ratos + quantCob;
        }
        else if (tipoCob == 's') {
            sapos = sapos + quantCob;
        }
    }

    percCoelhos = (coelhos / total) * 100;
    percRatos = ratos / total * 100;
    percSapos = sapos / total * 100;

    printf("\nRELATORIO FINAL: \n");
    printf("Total: %.0lf cobaias.\n", total);
    printf("Total de coelhos: %.0lf.\n", coelhos);
    printf("Total de ratos: %.0lf.\n", ratos);
    printf("Total de sapos: %.0lf.\n", sapos);
    printf("\nPercentual de coelhos: %.2lf.\n", percCoelhos);
    printf("Percentual de ratos: %.2lf.\n", percRatos);
    printf("Percentual de sapos: %.2lf.\n", percSapos);

    return 0;
}
