/*
Crie um programa que resolva a quest�o da fun��o hor�ria da posi��o do Movimento
Retil�neo Uniforme. Pe�a ao usu�rio que informe a quantidade de tempo para a seguinte
fun��o hor�ria:

S = 12 + 2.8*t

Seu programa deve ser capaz de ler dois instantes de tempo e exibir as respostas na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t1 = 0, t2 = 0;

    printf("Informe o primeiro tempo:\n");
    scanf("%f", &t1);
    printf("A posicao do primeiro eh:%.2f\n", 12+2.8*t1);
    printf("Informe o segundo tempo:\n");
    scanf("%f", &t2);
    printf("A posicao do segundo eh:%.2f\n", 12+2.8*t2);


    return 0;
}
