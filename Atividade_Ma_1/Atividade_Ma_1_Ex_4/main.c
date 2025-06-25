/*
Construa um programa, utilizando estrutura de la�o de repeti��o, para calcular o valor da s�rie
apresentada abaixo. Inclua a biblioteca matem�tica cmath ou math.h para utilizar a fun��o de
pot�ncia (pow):
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
