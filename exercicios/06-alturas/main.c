#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int i, quant;
    double somaAlt, mediaAlt, cont, somaMenor16, porcMenor16, somaIdade;
    //char nome[10];

    printf("Quantas pessoas serao digitadas? ");
    scanf("%i", &quant);

    char nome[quant][50];
    double idade[quant];
    double altura[quant];

    for (int i = 0; i < quant ; i++) {
        printf("Dados da %i(a) pessoa: \n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%lf", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    somaAlt = 0;
    cont = 0;
    somaIdade = 0;
    // ALTURA MÉDIA
    for (int i = 0; i < quant ; i++) {
        somaAlt = somaAlt + altura[i];
        somaIdade = somaIdade + idade[i];
        cont++;
    }
    mediaAlt = somaAlt / cont;
    printf("\nAltura media : %.2lf.\n", mediaAlt);

    somaMenor16 = 0;
    for (int i = 0; i < quant ; i++) {
        if (idade[i] < 16) {
            somaMenor16++;
        }
    }

    porcMenor16 = (somaMenor16 / cont) * 100;

    printf("\nPessoas com menos de 16 anos: %.1lf%.\n", porcMenor16);
    for (int i = 0; i < quant ; i++) {
        if (idade[i] < 16) {
            printf("%s \n", nome[i]);
        }
    }


    return 0;
}
