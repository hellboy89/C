#include <stdio.h>

int main() {
// Neces�rio definir o tipo da vari�vel previamente, como abaixo.
// Se caso a quantidade de caracter passar de 32 bits, necess�rio declarar o int como abaixo.
    long long int x;
    int y;
    double a;

    x = 100000;
    y = 12;
    a = 10;

    printf("%d", x+y+10);


    return 0;

}
// abaixo est� a diferen�a de dados entre o VisualG e o C.
// n�meros inteiros: inteiro / int
// n�meros flutuantes: real / double
// um �nico caracter: caractere / char
// texto: caractere / char[ ]
// valor l�gico: logico / int, obs.: O Falso � representado pelo n�mero 0.
