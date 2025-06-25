/*
Fa�a um programa que solicite ao usu�rio uma frase de - no m�ximo 150 caracteres - e conte quantas vogais
(a, e , i, o, u) existem nela, considerando tanto ma�sculas quanto min�sculas
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[151];
    int vogais = 0;

    printf("Digite uma frase: ");
    scanf("%s", frase);

    for(int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            vogais ++;
        }
    }

    printf("Numero de vogais na frase: %d\n", vogais);

    return 0;
}
