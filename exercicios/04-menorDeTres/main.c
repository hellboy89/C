#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3, menor;

    printf("Primeiro Valor: ");
    scanf("%d", &valor1);
    printf("Segundo valor: ");
    scanf("%d", &valor2);
    printf("Terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 < valor2 && valor1 < valor3) {
        menor = valor1;
    }
    else if (valor2 < valor1 && valor2 < valor3) {
        menor = valor2;
    }
    else {
        menor = valor3;
    }

    printf("\nMenor = %d\n", menor);

    return 0;
}
