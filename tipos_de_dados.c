#include <stdio.h>

int main() {
// Necesário definir o tipo da variável previamente, como abaixo.
// Se caso a quantidade de caracter passar de 32 bits, necessário declarar o int como abaixo.
    long long int x;
    int y;
    double a;

    x = 100000;
    y = 12;
    a = 10;

    printf("%d", x+y+10);


    return 0;

}
// abaixo está a diferença de dados entre o VisualG e o C.
// números inteiros: inteiro / int
// números flutuantes: real / double
// um único caracter: caractere / char
// texto: caractere / char[ ]
// valor lógico: logico / int, obs.: O Falso é representado pelo número 0.
