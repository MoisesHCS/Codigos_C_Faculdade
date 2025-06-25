/*
Faça um programa que calcule sua idade em dias e exiba a resposta na tela respeitando a seguinte
formatação “A idade de 35 anos corresponde, aproximadamente, 12775 dias de vida”. Considere
que um ano possua 365 dias. Depois, modifique o programa para aceitar duas idades e descobrir
qual pessoa é a mais velha.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0, idade2 = 0;

    printf("Informe a primeira idade idade:\n");
    scanf("%d", &idade);
    printf("Informe a segunda idade:\n");
    scanf("%d", &idade2);
    printf("A idade de %d", idade);
    printf(" corresponde a aproximadamente em dias: %d\n", idade*365);
    printf("A idade de %d", idade2);
    printf(" correponde a aproximadamente em dias: %d\n", idade2*365);

    if (idade > idade2)
        printf("A idade %d eh maior", idade);
    else
        printf("A idade %d eh maior", idade2);



    return 0;

}
