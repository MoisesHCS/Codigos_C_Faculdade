/*
Ler um n�mero inteiro n. Escrever a soma de todos os n�meros pares de 2 at� n.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma;
    printf("Digite um numero: \n");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("A soma eh: %d", soma);

    return 0;
}
