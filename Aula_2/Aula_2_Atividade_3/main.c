/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade
deste item. A seguir, calcule e mostre o valor da conta a pagar.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo = 0, quantidade = 0;
    float total = 0;

    printf("Digite o codigo do item: \n");
    scanf("%d", &codigo);
    printf("Digite a quantidade: \n");
    scanf("%d", &quantidade);

    if (codigo == 1)
        total = 4.00 * quantidade;
    else if (codigo == 2)
        total = 4.50 * quantidade;
    else if (codigo == 3)
        total = 5.00 * quantidade;
    else if (codigo == 4)
        total = 2.00 * quantidade;
    else if (codigo == 5)
        total = 1.50 * quantidade;

    printf("Total a pagar : R$ %.2f", total);

    return 0;
}
