/*
Ler um número inteiro n. Escrever a soma de todos os números pares de 2 até n.
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
