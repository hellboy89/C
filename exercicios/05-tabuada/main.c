#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, result;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%i", &num);

    for (i = 1 ; i <= 10 ; i++) {
        printf("%i x %i = %i \n", num, i, num * i);
    }


    return 0;
}
