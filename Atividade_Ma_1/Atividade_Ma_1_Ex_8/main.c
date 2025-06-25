/*
Construa um programa que peça ao usuário para informar dois valores inteiros e positivos j e k e
uma matriz real A j x k. e que verifique se existem elementos repetidos em A. No final, seu
programa deverá mostrar se existem elementos repetidos e quantos foram.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //declarando a variavel linhas
    int j = 0;
    // declarando a variavel colunas
    int k = 0;

    int mx = 0;
    // declarando a variavel linha percorrida
    int l = 0;
    // declarando a variavel coluna percorrida
    int c = 0;
    int r = 0;
    int cr = 0;


    printf("Digite o numero de linhas da matriz\n");
    scanf("%d", &j);

    printf("Digite o numero de colunas da matriz\n");
    scanf("%d\n", &k);
    int m[j][k];
    for (int l=0; l<j; l++){
        for (int c=0; c<k; c++)
            scanf("%d", &m[l][c]);


    }
    for (int l=0; l<j; l++) {
        for (int c=0; c<k; c++)
            printf("%d\t", m[l][c]);
        printf("\n");
   }

      for (int l=0; l< j; l++) {
        for (int c=0; c< k; c++)
        r= m[l][c];
        if (r == m[l+1][c+1]){
            printf("O elemento %d eh um elemento repetido", m[l][c]);
        cr++;
        }
      }
    printf("A quantidade de vezes que numeros se repetiram foi %d", cr);

    return 0;
}
