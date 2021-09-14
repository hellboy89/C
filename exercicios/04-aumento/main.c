#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salAtual, salNovo, aumento;
    char porc[5];

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salAtual);

    if (salAtual <= 1000.00) {
        aumento = salAtual * 0.20;
        salNovo = salAtual + aumento;
        strcpy(porc, "20%");
    }
    else if (salAtual > 1000.00 && salAtual <= 3000.00) {
        aumento = salAtual * 0.15;
        salNovo = salAtual + aumento;
        strcpy(porc, "15%");
    }
    else if (salAtual > 3000.00 && salAtual <= 8000.00) {
        aumento = salAtual * 0.10;
        salNovo = salAtual + aumento;
        strcpy(porc, "10%");
    }
    else if (salAtual > 8000.00) {
        aumento = salAtual * 0.05;
        salNovo = salAtual + aumento;
        strcpy(porc, "5%");
    }

    printf("\nNovo Salario: R$ %.2lf.\n", salNovo);
    printf("Aumento = R$ %.2lf.\n", aumento);
    printf("Porcentagem = %s\n", porc);

    return 0;
}
