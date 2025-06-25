/*
Dada uma matriz M3 x 3 com elementos reais, faça um programa que verifique qual linha da matriz
possui o maior desvio padrão.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [3][3];
    float dp1 = 0, dp2 = 0, dp3 = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");

    }

    dp1 = (matriz[0][0] + matriz[0][1] + matriz[0][2]);
    printf("%d", dp1);


    return 0;
}
