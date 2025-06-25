/*
Faça programa que transforme todas as vogais minúsculas de uma frase de no máximo
100 caracteres para maisculas. Exemplo: "ola" ficaria "OlA".
*/

#include <stdio.h>
#include <stdlib.h>
#define max 100

int main()
{
    char frase[101];

    printf("Digite uma frase: ");
    scanf("%s", frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a') {
            frase[i] = 'A';
        }else if (frase[i] == 'e') {
            frase[i] = 'E';
        }else if (frase[i] == 'i') {
            frase[i] = 'I';
        }else if (frase[i] == 'o') {
            frase[i] = 'O';
        }else if (frase[i] == 'u') {
            frase[i] = 'U';
        }
    }

    printf("Frase transformada: %s\n", frase);

    return 0;
}
