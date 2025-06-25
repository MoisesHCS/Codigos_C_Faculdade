/*
Faça um programa que contenha uma função que receba 2 vetores A e B de tamanho 10 de inteiros,
por parâmetro, e que preencha B com o dobro de cada elemento de A. O vetor A é preenchido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int v1[10], int v2[10]){
    printf("Digite os valores do primeiro vetor");
    for(int i = 0; i < 10; i++)
        scanf("%d", &v1[i]);
    for(int i = 0; i < 10; i++)
        printf("%d\t", v1[i]);
    for(int i = 0; i < 10; i++)
        scanf("%d", &v2[i]);
    for(int i = 0; i < 10; i++)
        printf("%d\t", v2[i]);
}


int main()
{
    int v1, v2;
    preencherVetor(v1, v2);

    return 0;
}
