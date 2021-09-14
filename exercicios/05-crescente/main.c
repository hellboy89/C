#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorX, valorY;

    printf("Digite dois numeros:\n");
    scanf("%i", &valorX);
    scanf("%i", &valorY);

    while (valorX != valorY)
    {
        if (valorX < valorY)
        {
            printf("Crescente\n");
        }
        else
        {
            printf("Decrescente\n");
        }

        printf("Digite dois numeros:\n");
        scanf("%i", &valorX);
        scanf("%i", &valorY);
    }

    return 0;
}
