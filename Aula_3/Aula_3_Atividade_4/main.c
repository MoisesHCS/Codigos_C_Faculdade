/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma e a média aritmética dos
números ímpares entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, soma, contador = 0;
    float media;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero; \n");
    scanf("%d", &n2);

    if (n1 < n2) {
        for (int i = n1 + 1; i < n2; i++){
            soma += i;
            contador++;
        }
        media = soma / contador;
    }else if (n1 == n2) {
        media = 0;
        soma = 0;
    }else {
        int inicio = n2;
        int fim = n1;
        for (int i = inicio + 1; i < fim; i++) {
            soma += i;
            contador++;
        }
        media = soma / contador;
    }
    printf("Sua media foi de %.2f \n Sua soma foi de %d", media, soma);




    return 0;
}
