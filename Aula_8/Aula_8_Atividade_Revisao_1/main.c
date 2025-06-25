/*
Um dado programa feito pelos alunos da Engenharia de Computação – FHO é capaz de
calcular, com maestria, a seguinte equação. Dessa forma, mostre o fragmento de código capaz de calcular essa equação sabendo que o valor da
entrada n é o último digito do seu RA. Qual será o resultado exibido?
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
