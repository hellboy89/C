#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma, i;

    soma = 0;

    while (num != 0) {
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);
        if (num % 2 != 0) {
            num = num + 1;
        }
        else if (num == 0){
            break;
        }
        soma = 5 * num + 20;
        printf("\nSoma = %i.\n", soma);
    }

    return 0;
}
