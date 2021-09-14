#include <stdio.h>
#include <stdlib.h>

int main()
{
    double medidaGlic;

    printf("Digite a medida da Glicose: ");
    scanf("%lf", &medidaGlic);

    if (medidaGlic <= 100.0) {
        printf("\nClassificacao: Normal\n");
    }
    else if (medidaGlic > 100 && medidaGlic <= 140) {
        printf("\nClassificacao: Elevado\n");
    }
    else {
        printf("\nClassificacao: Diabetes\n");
    }

    return 0;
}
