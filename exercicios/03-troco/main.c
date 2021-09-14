#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, dinheiroRec, troco;
    int quantComp;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantComp);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRec);

    troco = dinheiroRec - (preco * quantComp);

    printf("\nTroco = %.2lf\n", troco);

    return 0;
}
