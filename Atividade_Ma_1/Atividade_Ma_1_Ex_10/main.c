/*
Fa�a uma fun��o simples, sem par�metro, que tem por objetivo realizar a leitura de um n�mero
inteiro m e imprimir m linhas na tela com o seguinte formado.
Exemplo: se o usu�rio digitar m = 6, ser� exibido a seguinte imagem:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    char matriz[n][n];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j && j == i){
                printf("[%c]", '+');
            }else{
                printf("[%c]", '*');
            }
        }
        printf("\n");
    };

    return 0;
}
