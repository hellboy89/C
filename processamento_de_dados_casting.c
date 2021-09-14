#include <stdio.h>

int main ()
{
    int x = 5;
    int y = 2 * x;
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    int x2 = 5;
    double y2 = 2 * x2;
    printf("%d\n", x2);
    printf("%.1lf\n", y2);

    // Calculo área do trapézio
    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    // Por padrão a saída do comando abaixo é com 6 casas decimais, há não ser que eu limite.
    printf("%lf\n\n", area);

    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    // Aqui o resultado deveria ser 2.5, mas como estou usando somente números inteiro, a resposta será 2.
    printf("%d\n\n", resultado);

    double a3;
    int b3;
    a3 = 5.2;
    // Esse int entre parenteses, é um modo de forçar a variável b3 para sair como inteiro
    // Mas na linguagem C, não necessita utilizar, em outras linguagens, talvez sim.
    b3 = (int) a3;
    printf("%d\n", b3);

    return 0;

}
