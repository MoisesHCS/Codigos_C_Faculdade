/*
Construa um programa, utilizando estrutura de laço de repetição, para calcular o valor da série
apresentada abaixo. Inclua a biblioteca matemática cmath ou math.h para utilizar a função de
potência (pow):
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 0, soma = 0;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        soma += pow(n, i)*n;
    }

    printf("%d", soma);

    return 0;
}
