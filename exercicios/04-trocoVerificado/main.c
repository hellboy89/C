#include <stdio.h>
#include <stdlib.h>

int main()
{
    double precoUni, quantComp, dinRec, troco, precoTot;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUni);
    printf("Quantidade comprada: ");
    scanf("%lf", &quantComp);
    precoTot = precoUni * quantComp;
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinRec);

    if (dinRec >= precoTot) {
        troco = dinRec - precoTot;
        printf("\nTroco = %.2lf\n", troco);
    }
    else if (dinRec < precoTot) {
        troco = precoTot - dinRec;
        printf("\nDinheiro Insuficiente. Faltam R$ %.2lf.\n", troco);
    }


    return 0;
}
