/*
Pesquise o uso da biblioteca <string.h> e como descobrir o tamanho de uma string atrav�s das
fun��es dessa biblioteca. Fa�a um programa exemplo que pe�a o nome de uma pessoa e devolta o
tamanho desse nome.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[101];

    printf("Digite seu nome (no maximo 100 caracteres): ");
    scanf("%s", nome);
    int comprimento = strlen(nome);

    printf("%s tem %d caracteres.\n", nome, comprimento);

    return 0;
}
