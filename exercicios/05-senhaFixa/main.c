#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha, cont;
    senha = 0;
    cont = 0;
    printf("Digite a senha: ");
    scanf("%i", &senha);


    while (senha != 2312) {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%i", &senha);
        senha = senha;
        cont++;
        if (senha == 2312) {
            printf("Acesso permitido!\n");
        }
    }

    if (senha == 2312 && cont <= 0) {
        printf("\nAcesso permitido!\n");
    }

    return 0;
}
