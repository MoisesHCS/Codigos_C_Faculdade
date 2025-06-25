/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos
(desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numerospositivos = 0;

    for(int i = 1; i <= 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero > 0) {
            numerospositivos++;
        }
    }

    printf("Voce digitou %d numeros positivos", numerospositivos);

    return 0;
}
