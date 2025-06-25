/*
Faça um programa que, dada uma matriz M4x4, mostre o dobro dos valores da sua diagonal principal. Além disso, compute a somatória desses valores, a média.

Ex.: 1 | 2 | 3 | 4
       5 | 6 | 7 | 8
       9 | 0 | 1 | 0
       8 | 1 | 9 | 0

Seu programa deverá exibir o seguinte relatório:
A diagonal principal é : 1, 6, 1, 0
O dobro da diagonal é: 2, 12, 2, 0
A somatória dos valores é: 8
A média é: 2
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha = 4;
    int coluna = 4;
    int m[linha][coluna], diagonalprincipal[4][4];

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
            if(i == j && j == i) {
                m[i][j] = m[i][j]*2;
                diagonalprincipal[linha][coluna] = diagonalprincipal[i][j];
            }
            printf("%d", m[i][j]);
        }
        printf("\n\n");
    }

    for (int i = 0; i < 4; i++) {
        printf("A diagonal principal eh %d\n", diagonalprincipal);
    }

    return 0;
}
