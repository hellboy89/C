#include <stdio.h>
#include <string.h>

int main()
{

    int idade = 20;
    double salario = 5800.5;
    double altura = 1.63;
    char genero = 'F';
    // Ao definir uma vari�vel que armazene nome, n�o esquece de definir a quantidade de caracteres.
    // O que est� entre chaves, indica que ser� criado um vetor.
    char nome[50];
    // Se tiver 2 � aspas duplas como abaixo.
    // Para definir um char grande, necess�rio utilizar o par�metro como abaixo "strcpy".
    strcpy(nome, "Juan Cleber");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;


}

// Poss�vel tamb�m organizar nosso c�digo automaticamente, indo na op��o "plugins/Source Code Formatter (ASTyle)"
