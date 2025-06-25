/*
Um dado programa feito pelos alunos da Engenharia de Computa��o � FHO � capaz de
calcular, com maestria, a seguinte equa��o. Dessa forma, mostre o fragmento de c�digo capaz de calcular essa equa��o sabendo que o valor da
entrada n � o �ltimo digito do seu RA. Qual ser� o resultado exibido?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, soma = 0;

    printf("Digite o ultimo digito do seu RA: \n");
    scanf("%d", &n);

    for (int k = 0; k < n + 2; k++)
    {
        soma += 2*n - k + 1;
    }

    printf("%d", soma);

    return 0;
}
