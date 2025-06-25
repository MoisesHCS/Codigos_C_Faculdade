/*
Faça um programa que calcule sua idade em dias e exiba a resposta na tela respeitando a
seguinte formatação “A idade de 35 anos corresponde, aproximadamente, 12775 dias
de vida”. Considere que um ano possua 365 dias. Depois, modifique o programa para
aceitar duas idades e descobrir qual pessoa é a mais velha.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;

    printf("Informe sua idade:\n");
    scanf("%d", &idade);
    printf("A idade de %d ", idade);
    printf("corresponde a aproximadamente em dias: %d", idade*365);

    return 0;
}
