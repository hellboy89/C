#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorX, i, num, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &num);

    dentro = 0;
    fora = 0;

    for (i = 1 ; i <= num ; i++) {
        printf("Digite um numero: ");
        scanf("%i", &valorX);
        if (valorX >= 10 && valorX <= 20) {
            dentro++;
        }
        else {
            fora++;
        }
    }

    printf("\n%i Dentro", dentro);
    printf("\n%i Fora\n", fora);

    return 0;
}
