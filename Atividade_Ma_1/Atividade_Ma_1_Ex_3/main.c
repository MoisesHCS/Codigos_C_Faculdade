/*
Peça ao usuário para que informe um número inteiro positivo n, e determine o número harmônico
Hn definido pela equação abaixo. O seu programa deverá exibir uma mensagem de erro caso o
usuário informar um número nulo ou negativo. Resolva utilizando estrutura de laço de repetição.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, soma = 0;

    printf("digite um numero inteiro e nulos numero: ");
    scanf("%d", &n);

    if( n > 0 ){
        int k = 1;
        for(int i = 0; i < n; i++){
            soma += (1/k);
            k++;
        }
        printf("a soma e: %d ", soma);
    }else{
        printf("error !!");
    }
    return 0;
}
