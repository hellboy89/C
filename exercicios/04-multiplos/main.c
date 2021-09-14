#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros: \n");
    printf(" ");
    scanf("%i", &num1);
    printf(" ");
    scanf("%i", &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("\nSao Multiplos.\n");
    }
    else {
        printf("\nNao Sao Multiplos.\n");
    }

    return 0;
}
