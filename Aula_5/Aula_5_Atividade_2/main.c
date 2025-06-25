/*
Faça um programa que receba uma palavra e a imprima de trás-pra-frente
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[100];
    char inversa[100];
    int u = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (u = 0; palavra[u] != '\0'; u++);  {

    }

    for (int i = 0; i < u; i++) {
        inversa[i] = palavra[u-i-1];
    }
    inversa[u] = '\0';

    printf("Palavra ao contrario: %s\n", inversa);

    return 0;
}
