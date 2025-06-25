/*
Entre com um nome e imprima o nome somente se a primeira letra do nome for 'a' (maiscula ou minuscula).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];

    printf("Digite seu nome: %s\n");
    scanf("%s", nome);

    if (nome[0] == 'A' || nome[0] == 'a')
        printf("Nome :%s", nome);
    else
        printf("erro");



    return 0;
}
