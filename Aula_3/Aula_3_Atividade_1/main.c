/*
Ler um n�mero inteiro n. Escrever a soma de todos os n�meros de 1 at� n.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma;
    printf("Digite um numero: \n");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++) {
        soma += i;
    }

    printf("A soma eh: %d", soma);

    return 0;
}
