#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valorX;

    printf("Digite o valor de X: ");
    scanf("%i", &valorX);

    for (i = 1 ; i <= valorX ; i++) {
        if (i % 2 != 0) {
            printf("%i \n", i);
        }
    }

    return 0;
}
