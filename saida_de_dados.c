#include <stdio.h>

int main()
{
    //se quiser pular linha basta utilizar o \n, como no python.
    printf("Bom dia\n");
    printf("Boa noite\n");

    int x = 10;
    int y = 20;
    int soma = x + y;
    double x2 = 2.34567;
    double y2 = 3.342423;
    double somaxy = x2 + y2;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("soma de x e y = %d\n", soma);
    printf("x2 = %lf\n", x2);
    printf("y2 = %lf\n", y2);
    // Abaixo o valor ".2" após o %, informa o número de digitos que eu quero após o ponto flutuante.
    printf("soma de x2 e y2 = %.2lf\n\n\n", somaxy);

    int idade = 32;
    double salario = 4560.9;
    char nome [50];
    strcpy(nome, "Maria Silva");
    char sexo = 'F';

    printf("A funcionaria %s, sexo %c, ganha R$ %.2lf e tem %d anos\n\n", nome, sexo, salario, idade);

    return 0;
}
