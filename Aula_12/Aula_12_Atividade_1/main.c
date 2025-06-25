/*
1) Leia o contexto abaixo e programe o que se pede:
a. Crie uma struct de nome Ponto, que armazena um ponto do plano cartesiano. Um
ponto deve possuir as coordenadas X e Y, ambas do tipo double.
b. Crie uma struct Retangulo, que armazena as informa��es de um ret�ngulo no plano
cartesiano. Um ret�ngulo deve possuir dois pontos: um que representa seu ponto da
superior esquerda, e um que representa seu ponto da inferior direita.
c. Crie uma fun��o de nome distancia, que receba como par�metros duas vari�veis do
tipo Ponto e retorne um double, que representa o valor da dist�ncia entre eles
(pesquise a f�rmula para c�lculo da dist�ncia). Se necess�rio, use a biblioteca
matem�tica math.h
d. Crie uma fun��o de nome maisProximoOrigem que receba como par�metros duas
vari�veis do tipo Ponto e retorne o Ponto mais pr�ximo � origem (lembre-se, a origem
� o ponto de coordenadas (0.0, 0.0) do plano cartesiano). Essa fun��o deve fazer uso
da fun��o distancia(), implementada anteriormente.
e. Crie uma fun��o de nome estaContido, que recebe como par�metros uma vari�vel do
tipo Ponto e uma vari�vel do tipo Retangulo. Essa fun��o deve retornar 1, caso o
ponto passado por par�metro esteja dentro do ret�ngulo passado por par�metro, e
0, caso contr�rio.
f. Usando as fun��es criadas anteriormente, escreva um programa que leia as
informa��es de dois pontos e um ret�ngulo. Em seguida seu programa deve informar
a dist�ncia entre os dois pontos informados, qual deles est� mais pr�ximo da origem,
e se cada um dos pontos est� ou n�o contido no ret�ngulo informado. Abaixo est� um
exemplo de funcionamento do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;

}Ponto;

typedef struct{
    Ponto supesq;
    Ponto infdir;

}Retangulo;

double distancia(Ponto a, Ponto b){
    double termoX, termoY, valordist;
    termoX = pow(b.x - a.x, 2);
    termoY = pow(b.y - b.x, 2);
    valordist = sqrt(termoX + termoY);
    return valordist;
}

Ponto maisProximoOrigem(Ponto a, Ponto b){
    Ponto origem = {0.0,0.0};
    double dist1 = distancia(a, origem);
    double dist2 = distancia(b, origem);
    if (dist1 > dist2){
        return b;
    }
    else{
        return a;
    }
}

int estaContido(Ponto a, Retangulo r){
    double minX, maxX, minY, maxY;

    if(r.supesq.x < r.infdir.x){
        minX = r.supesq.x;
        maxX = r.infdir.x;
    }
    else{
        minX = r.infdir.x;
        maxX = r.supesq.x;
    }

    if(r.supesq.y < r.infdir.y){
        minY = r.supesq.y;
        maxY = r.infdir.y;
    }
    else{
        minY = r.infdir.y;
        maxY = r.supesq.y;
    }

    if(a.x >= minX && a.x <= maxX && a.y >= minY && a.y <= maxY){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    Ponto p1, p2, maisProximo;
    Retangulo ret;
    double dist;

    printf("Informe as coordenadas do ponto 1 (x y): \n");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Informe as coordenadas do ponto 2 (x y): \n");
    scanf("%lf %lf", &p2.x, &p2.y);

    printf("Informe as coordenadas do ponto superior esquerdo do retangulo (x y): \n");
    scanf("%lf %lf", &ret.supesq.x, &ret.supesq.y);

    printf("Informe as coordenadas do ponto inferior direito do retangulo (x y): \n");
    scanf("%lf %lf", &ret.infdir.x, &ret.infdir.y);

    dist = distancia(p1,p2);
    printf("A distancia entre p1 e p2 eh %lf\n", dist);

    maisProximo = maisProximoOrigem(p1,p2);
    printf("O ponto mais proximo da origem eh (%f %f)\n", maisProximo.x, maisProximo.y);

    if(estaContido(p1, ret)){
        printf("p1 (%f %f) esta contido\n", p1.x, p1.y);
    }
    else{
        printf("p1 (%f %f) nao esta contido\n", p1.x, p1.y);
    }
    if(estaContido(p2, ret)){
        printf("p2 (%f %f) esta contido\n", p2.x, p2.y);
    }
    else{
        printf("p2 (%f %f) nao esta contido\n", p2.x, p2.y);
    }

    return 0;
}
