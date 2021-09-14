#include <stdio.h>
#include <string.h>

// Aqui serve para limpar a entrada de um texto para ele não reconhecer os espaços.
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Função abaixo serve para fazer a saída de leitura de um texto grande
void ler_texto(char *buffer, int lenght) {
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main ()
{
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf("Digite o valor da idade 1: ");
    scanf("%d", &idade1);
    printf("Digite o nome da pessoa 1: ");
    limpar_entrada();
    // Para salvar um nome grande, necessário utilizar o fgets como abaixo.
    // Que terá o nome da variável, a quantidade de caracteres e o "stdin" que significa entrada padrão.
    ler_texto(nome1, 50);

    printf("Digite o valor da idade 2: ");
    scanf("%d", &idade2);
    printf("Digite o nome da pessoa 2: ");
    limpar_entrada();
    ler_texto(nome2, 50);

    printf("Idade1 = %d\n", idade1);
    printf("Nome1 = %s\n", nome1);
    printf("Idade2 = %d\n", idade2);
    printf("Nome2 = %s\n", nome2);

    return 0;
}
