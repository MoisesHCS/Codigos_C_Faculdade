/*
2) Faça um programa que tenha dois vetores A e B de tamanho 10, sendo que A é preenchido
pelo usuário. Agora, seu programa deverá conter uma função capaz de receber os vetores e
preencher o vetor B com o fatorial de cada elemento de A. Exiba os valores na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void receberVetor(int vetA[], int vetB[]){

    printf("Digite os valores do vetor A: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetA[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t", vetA[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        int n = vetA[i]; //n é igual ao elemento que esta na posição i do vetor A
        int resultado = 1; //reseta o resultado para 1 toda vez que rodar
        for(int j = 1; j <= n; j++){
            resultado *= j; //multiplica de 1 ate o valor do n naquele momento
        }
        vetB[i] = resultado;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t", vetB[i]);
    }
}

int main()
{
    int vA[10], vB[10];

    receberVetor(vA, vB);

    return 0;
}
