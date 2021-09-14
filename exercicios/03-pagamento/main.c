#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    double valorHora, horasTrab, pagTotal;

    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%lf", &horasTrab);

    pagTotal = valorHora * horasTrab;

    printf("\nO pagamento para %s deve ser %.2lf.\n", nome, pagTotal);

    return 0;
}
