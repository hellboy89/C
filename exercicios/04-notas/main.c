#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFin;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFin = nota1 + nota2;

    printf("\nNota Final = %.1lf\n", notaFin);

    if (notaFin >= 60) {
        printf("Aprovado\n");
    }
    else {
        printf("Reprovado\n");
    }

    return 0;
}
