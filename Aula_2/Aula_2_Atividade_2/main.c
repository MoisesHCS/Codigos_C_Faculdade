/*
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou
"Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si. Lembre-se de utilizar o
operador de resto da divisão (%).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, mult = 0;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    mult = a%b;

    if (mult == 0)
        printf("Sao multiplos");
    else
        printf("Eles nao sao multiplos");

    return 0;
}
