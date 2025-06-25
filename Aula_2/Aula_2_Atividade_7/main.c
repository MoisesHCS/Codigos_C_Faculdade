/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto
em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um
dos eixos cartesianos ou na origem (x = y = 0).

Se o ponto estiver na origem, escreva a mensagem “Origem”.
Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0, y = 0;

    printf("Digite a coordenada x: \n");
    scanf("%f", &x);
    printf("Digite a coordenada y: \n");
    scanf("%f", &y);

    if (x > 0 && y > 0)
        printf("Primeiro quadrante");
    else if (x < 0 && y > 0)
        printf("Segundo quadrante");
    else if (x < 0 && y < 0)
        printf("Terceiro quadrante");
    else if (x > 0 && y < 0)
        printf("Quarto quadrante");
    else
        printf("Está na origem");

    return 0;
}
