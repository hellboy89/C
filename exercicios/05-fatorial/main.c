#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, fatorial;

    printf("Digite o valor de N: ");
    scanf("%i", &num);

    fatorial = 1;

    for ( int i = num ; i > 0 ; i-- ) {
        if (i > 0) {
            //printf("%i \n", i);
            fatorial = fatorial * i;
        }
    }

    printf("\n Fatorial = %i \n", fatorial);

    return 0;
}
