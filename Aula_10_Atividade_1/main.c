/*
Utilizando funções, crie um programa responsável por ler três valores reais X, Y e Z
e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo, imprimindo qual o tipo de triângulo.
Para que X, Y e Z formem um triângulo, é necessário que a seguinte propriedade seja satisfeita:
O comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
Sua função deve identificar o tipo de triângulo formado validando os seguintes pontos:
Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
Não esqueça de fazer a chamada da sua função na main.
*/

#include <stdio.h>
#include <stdlib.h>

void calcularLados(float x, float y, float z){

    if(x == y && y == z){
        printf("Equilatero");
    }
    else if(x == y || x == z || y == z){
        printf("Isosceles");
    }
    else{
        printf("Escaleno");
    }
}

int main()
{
    float L1, L2, L3;

    printf("Digite os lados do triangulo: \n");
    scanf("%f %f %f", &L1, &L2, &L3);

    calcularLados(L1, L2, L3);

    return 0;
}
