#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int lenght) {
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int quant, i, posicao;

    printf("Quantos alunos serao digitados: ");
    scanf("%i", &quant);

    char nome[quant][30];
    double media[quant], nota1[quant], nota2[quant];

    for (i = 0; i < quant; i++) {
        printf("Digite nome, primeira e segunda nota do %i o aluno: \n", i+1);
        limpar_entrada();
        ler_texto(nome[i], 50);
        scanf("%lf %lf", &nota1[i], &nota2[i]);
    }

    for (i = 0; i < quant; i++) {
        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    printf("\n\nAlunos Aprovados: \n");
    for (i = 0; i < quant; i++) {
        if (media[i] >= 6.0) {
            printf("%s \n", nome[i]);
        }
    }

    return 0;
}
