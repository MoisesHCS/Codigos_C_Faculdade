/*
5) Faça um programa que contenha uma função que receba, por parâmetro, uma matriz A(5,5) e
que preencha um vetor com a soma de cada uma das linhas de A. O usuário deverá preencher
a matriz através de uma função chamada preencherMatriz.
*/

#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int ma[][5]){


    printf("Digite os elementos da matriz: \n"); //aqui eu coleto os dados da matriz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            scanf("%d", &ma[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){ //aqui eu printo os dados
            printf("%d\t", ma[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Criei um contador, e conforme o for vai rodando,
    //adiciona um no contador para passar para a proxima posição do vetor
    int k = 0; //aqui eu defino k para ser um contador
    int vetor[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            soma += ma[i][j];
        }
        vetor[k] = soma; //como quer so as linhas, esta dentro do primeiro for
        k++;             // e a cada vez que rodar, acrescenta um no k, que é a posição, e adiciona a soma nessa posição
        soma = 0;        //reseto a soma
    }

    printf("Vetor com a soma das linhas da matriz: \n"); //aqui eu printo o vetor
    for(int l = 0; l < k; l++){
        printf("%d\t", vetor[l]);
    }
}

int main()
{
    int m[5][5];

    preencherMatriz(m);

    return 0;
}
