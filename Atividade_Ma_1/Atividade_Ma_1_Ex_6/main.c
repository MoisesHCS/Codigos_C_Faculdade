/*
Fa�a um programa que calcule o desvio padr�o de um vetor x de tamanho 20. Pe�a ao usu�rio
para informar os n�meros e, atrav�s de um la�o de repeti��o, calcule:

Inclua a biblioteca matem�tica math.h ou cmath para utilizar a fun��o de raiz quadrada (sqrt) e
potencia��o (pow).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x = 20;
    float mx = 0;
    float nx1 = 0;
    float nx2 = 0;
    float nx3 = 0;
    float nx4 = 0;
    float nx5 = 0;
    float nx6 = 0;
    float nx7 = 0;
    float nx8 = 0;
    float dp = 0;


    printf("Digite o valor de nx1\t");
    scanf("%f", &nx1);
    printf("Digite o valor de nx2\t");
    scanf("%f", &nx2);
    printf("Digite o valor de nx3\t");
    scanf("%f", &nx3);
    printf("Digite o valor de nx4\t");
    scanf("%f", &nx4);
    printf("Digite o valor de nx5\t");
    scanf("%f", &nx5);
    printf("Digite o valor de nx6\t");
    scanf("%f", &nx6);
    printf("Digite o valor de nx7\t");
    scanf("%f", &nx7);
    printf("Digite o valor de nx8\t");
    scanf("%f", &nx8);


    mx = (nx1+nx2+nx3+nx4+nx5+nx6+nx7+nx8)/8;
    printf("mx eh igual a %f\n", mx);

    dp = sqrt(((pow((x-mx), 2)/20)));

    printf("O desvio padr�o eh %f\n", dp);



    return 0;
}
