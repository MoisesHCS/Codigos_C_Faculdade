/*
Pe�a ao usu�rio para que informe um n�mero inteiro positivo n, e determine o n�mero harm�nico
Hn definido pela equa��o abaixo. O seu programa dever� exibir uma mensagem de erro caso o
usu�rio informar um n�mero nulo ou negativo. Resolva utilizando estrutura de la�o de repeti��o.
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
