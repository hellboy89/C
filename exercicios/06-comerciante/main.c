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
    int quant, i;

    printf("Serao digitados dados de quantos produtos: ");
    scanf("%i", &quant);

    char nome[quant][50];
    double precoComp[quant], precoVend[quant], abaixo, entre, acima, lucro, percLucro, totCompra, totVenda;

    for (i = 0; i < quant; i++) {
        printf("Produto %i: ", i+1);
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &precoComp[i]);
        printf("Preco de Venda: ");
        scanf("%lf", &precoVend[i]);
        printf("\n");
    }

    printf("\nValores Digitados: \n");
    for (i = 0; i < quant; i++) {
        printf("%s ", nome[i]);
        printf("%lf ", precoComp[i]);
        printf("%lf ", precoVend[i]);
        printf("\n");
    }

    abaixo = 0;
    entre = 0;
    acima = 0;
    totCompra = 0;
    totVenda = 0;
    for (i = 0; i < quant; i++) {
        lucro = precoVend[i] - precoComp[i];
        percLucro = lucro * 100 / precoComp[i];
        totCompra = totCompra + precoComp[i];
        totVenda = totVenda + precoVend[i];
        if (percLucro < 10) {
            abaixo++;
        }
        else if (percLucro <= 20) {
            entre++;
        }
        else {
            acima++;
        }
    }

    printf("\n\nLucro abaixo de 10: %.0lf. \n", abaixo);
    printf("Lucro entre 10 e 20: %.0lf. \n", entre);
    printf("Lucro acima de 20: %.0lf. \n", acima);
    printf("Valor total de compra: %.2lf. \n", totCompra);
    printf("Valor total de venda: %.2lf. \n", totVenda);
    printf("Lucro total: %.2lf. \n", totVenda - totCompra);

    return 0;
}
