#include <stdio.h>
#include <string.h>

int main()
{

    int idade = 20;
    double salario = 5800.5;
    double altura = 1.63;
    char genero = 'F';
    // Ao definir uma variável que armazene nome, não esquece de definir a quantidade de caracteres.
    // O que está entre chaves, indica que será criado um vetor.
    char nome[50];
    // Se tiver 2 é aspas duplas como abaixo.
    // Para definir um char grande, necessário utilizar o parãmetro como abaixo "strcpy".
    strcpy(nome, "Juan Cleber");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;


}

// Possível também organizar nosso código automaticamente, indo na opção "plugins/Source Code Formatter (ASTyle)"
