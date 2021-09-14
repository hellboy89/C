#include <stdio.h>
#include <stdlib.h>

int main()
{
    double quantRep, i, nota1, nota2, nota3, media, soma;

    printf("Quantos casos voce vai digitar? ");
    scanf("%lf", &quantRep);

    nota1 = 0;
    nota2 = 0;
    nota3 = 0;

    for ( i = 1 ; i <= quantRep ; i++ ) {
        printf("Digite tre numeros: \n");
        scanf("%lf", &nota1);
        nota1 = nota1 * 2;
        scanf("%lf", &nota2);
        nota2 = nota2 * 3;
        scanf("%lf", &nota3);
        nota3 = nota3 * 5;
        media = (nota1 + nota2 + nota3) / 10;
        printf("\nMedia = %.1lf \n", media);
    }



    return 0;
}
