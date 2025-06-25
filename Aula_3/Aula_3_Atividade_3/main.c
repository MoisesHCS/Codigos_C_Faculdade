/*
Ler um número inteiro n. Decidir se n é um número primo e apresente o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        printf("%d\n", i);
        if (n % i == 0){
            printf("Sim");
        }
        else {
            printf("Nao");
        }
    }


    return 0;
}
