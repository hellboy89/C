#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[50], nome2[50];
    //int ;
    double idade1, idade2, media;

    printf("Dados da Primeira Pessoa: \n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%lf", &idade1);

    printf("\nDados da Segunda Pessoa: \n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%lf", &idade2);

    media = (double)(idade1 + idade2) / 2.0;

    printf("\nA idade media de %s e %s e de %.1lf anos.\n", nome1, nome2, media);

    return 0;
}
