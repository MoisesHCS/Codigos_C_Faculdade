/*
Faça uma função simples, sem parâmetro, que tem por objetivo realizar a leitura de um número
inteiro m e imprimir m linhas na tela com o seguinte formado.
Exemplo: se o usuário digitar m = 6, será exibido a seguinte imagem:
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
