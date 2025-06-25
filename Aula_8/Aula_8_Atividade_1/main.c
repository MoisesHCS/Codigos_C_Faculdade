/*
Você está desenvolvendo um sistema de navegação para uma sonda espacial simples.
O objetivo é permitir que a sonda identifique a distância entre dois pontos no espaço tridimensional, representados pelas suas coordenadas.
Assim, faça um programa em C, utilizando struct, para auxiliar no contexto.

Dica:
1. Utilize a função sqrt da biblioteca <math.h> para calcular a raiz quadrada.
2. Fórmula: d = \/ (x2​−x1​)²+(y2​−y1​)²+(z2​−z1​)²

Exemplo de saída esperada:
Ponto A: (1.0, 2.0, 3.0)
Ponto B: (4.0, 6.0, 3.0)
Distância entre A e B: 5.000
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x, y, z;
} Ponto;

int main()
{
    float resultado = 0;


    Ponto pontos[2];

    for(int i = 0; i < 2; i++){
        printf("Digite a coordenada x: \n");
        scanf("%d", &pontos[i].x);
        printf("Digite a coordenada y: \n");
        scanf("%d", &pontos[i].y);
        printf("Digite a coordenada z: \n");
        scanf("%d", &pontos[i].z);
    }

    float termoX = pow(pontos[1].x - pontos[0].x, 2);
    float termoY = pow(pontos[1].y - pontos[0].y, 2);
    float termoZ = pow(pontos[1].z - pontos[0].z, 2);

    resultado = sqrt(termoX + termoY + termoZ);

    printf("%f", resultado);

    return 0;
}
