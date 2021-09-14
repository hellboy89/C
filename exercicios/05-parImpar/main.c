#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, quantRep;

    printf("Quantos numeros vc vai digitar? ");
    scanf("%i", &quantRep);

    for ( i = 1 ; i <= quantRep ; i++ ) {
        printf("Digite um numero: ");
        scanf("%i", &num);
        if (num % 2 != 0 && num < 0) {
            printf("Impar Negativo\n");
        }
        else if (num == 0) {
            printf("Nulo\n");
        }
        else if (num % 2 != 0 && num > 0) {
            printf("Impar Positivo\n");
        }
        else if (num % 2 == 0 && num < 0) {
            printf("Par Negativo\n");
        }
    }


    return 0;


}
