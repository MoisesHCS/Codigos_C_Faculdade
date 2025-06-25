/*
Utilizando fun��es, crie um programa respons�vel por ler tr�s valores reais X, Y e Z
e que verifique se esses valores podem ser os comprimentos dos lados de um tri�ngulo, imprimindo qual o tipo de tri�ngulo.
Para que X, Y e Z formem um tri�ngulo, � necess�rio que a seguinte propriedade seja satisfeita:
O comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento dos outros dois lados.
Sua fun��o deve identificar o tipo de tri�ngulo formado validando os seguintes pontos:
Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.
N�o esque�a de fazer a chamada da sua fun��o na main.
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
