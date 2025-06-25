/*
Faça um programa que calcule a RESISTÊNCIA de um equipamento dado as seguintes informações:

a. O usuário irá informar a tensão;
b. O usuário irá informar a potência do equipamento;
Sabendo que:

Equação 1: P(potência) = U(tensão).I(corrente)
Equação 2: U(tensão)=R(resistência).I(corrente)

Manipule as equações de tal forma a encontrar a equação para descobrir a resistência.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t = 0, p = 0, i = 0, r = 0;

    printf("Informe a tensao: \n");
    scanf("%f", &t);
    printf("Informe a potencia: \n");
    scanf("%f", &p);

    i = p/t;

    r = t/i;

    printf("A resistencia do equipamento eh %.2f", r);

    return 0;
}
