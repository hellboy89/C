#include <stdio.h>
#include <stdlib.h>

//(OK) - Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
//(OK) - casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
//(OK) - o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
//(OK) - duas casas decimais, conforme exemplo.

int main()
{
    int larg, comp;
    double metroQ, area, valorMQ, valorTot;

    printf("Digite a largura do terreno: ");
    scanf("%d", &larg);

    printf("Digite o comprimento do terreno: ");
    scanf("%d", &comp);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMQ);

    metroQ = comp * larg;
    valorTot = metroQ * valorMQ;

    printf("\nAre do Terreno: %.2lf\n", metroQ);
    printf("Preco do Terreno: %.2lf\n", valorTot);

    return 0;
}
