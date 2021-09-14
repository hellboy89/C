#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int quant, i, maisVelho, posicao;

    printf("Quantas pessoas vc vai digitar? ");
    scanf("%i", &quant);

    char nome[quant][20];
    int idade[quant];

    for (i = 0; i < quant; i++) {
        printf("Dados da %i a pessoa: \n", i+1);
        printf("Nome: ");
        limpar_entrada();
        scanf("%s", &nome[i]);
        printf("Idade: ");
        scanf("%i", &idade[i]);
    }

    maisVelho = idade[0];
    posicao = 0;
    for (i = 0; i < quant; i++) {
        if (idade[i] > maisVelho) {
            maisVelho = idade[i];
            posicao = i;
        }
    }

    printf("\n\nMais velho: %s.\n", nome[posicao]);

    return 0;
}
