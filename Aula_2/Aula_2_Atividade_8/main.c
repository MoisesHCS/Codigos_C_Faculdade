/*
Fa�a um programa que calcule a RESIST�NCIA de um equipamento dado as seguintes informa��es:

a. O usu�rio ir� informar a tens�o;
b. O usu�rio ir� informar a pot�ncia do equipamento;
Sabendo que:

Equa��o 1: P(pot�ncia) = U(tens�o).I(corrente)
Equa��o 2: U(tens�o)=R(resist�ncia).I(corrente)

Manipule as equa��es de tal forma a encontrar a equa��o para descobrir a resist�ncia.
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
