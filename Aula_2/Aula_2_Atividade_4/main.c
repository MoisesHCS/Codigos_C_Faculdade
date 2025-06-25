/*
Crie um programa que resolva a questão da função horária da posição do Movimento Retilíneo
Uniforme:

S = 20 + 3*t

Leia dois instantes de tempo e exiba as respostas na tela para cada um. Verifique se os resultados
são iguais, caso contrário, indique o maior e o menor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t1 = 0, t2 = 0, s1 = 0, s2 = 0;

    printf("Digite o primeiro valor: \n");
    scanf("%f", &t1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &t2);
    s1 = 20+3*t1;
    s2 = 20+3*t2;
    printf("A posicao do primeiro tempo eh %.2f\n",s1);
    printf("A posicao do segundo tempo eh %.2f\n",s2);

    if (s1 == s2) {
        printf("Os dois valores são iguais");
    }
    else if (s1 > s2) {
        printf("s1 eh maior");
    }
    else {
        printf("s2 eh maior");
    }

    return 0;
}
