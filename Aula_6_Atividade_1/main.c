/*
Fa�a um programa que, dada uma matriz M4x4, mostre o dobro dos valores da sua diagonal principal. Al�m disso, compute a somat�ria desses valores, a m�dia.

Ex.: 1 | 2 | 3 | 4
       5 | 6 | 7 | 8
       9 | 0 | 1 | 0
       8 | 1 | 9 | 0

Seu programa dever� exibir o seguinte relat�rio:
A diagonal principal � : 1, 6, 1, 0
O dobro da diagonal �: 2, 12, 2, 0
A somat�ria dos valores �: 8
A m�dia �: 2
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
