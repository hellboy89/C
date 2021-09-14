#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
    printf("Qual seu nome: ");
    // Abaixo será feito a leitura do nome, lembrando que o scanf, não serve para ler nomes que tenham espaços.
    // Para isso necessário utilizar o fgets.
    scanf("%s", &nome);

    printf("Nome = %s\n", nome);
    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);

    //return 0;
}
