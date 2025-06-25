/*
3) Faça um programa que leia um vetor de 20 números. Depois, deve ser lido mais um número
qualquer e verificar se esse número existe no vetor. Se existir, seu programa deve gerar um
novo vetor sem esse número e exibir na tela. (Considere que não haverá números repetidos).
*/

#include <stdio.h>
#include <stdlib.h>

void lerVetor(int vetA[], int n){
    for(int i = 0; i < 10; i++){
        printf("Preencha o %d elemento do vetor: \n", i + 1); //coletando as informações
        scanf("%d", &vetA[i]);
    }

    printf("Digite um numero:");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++){
        printf("%d\t", vetA[i]); //exibindo o vetor A
    }

    printf("\n");

    printf("Novo vetor: \n");

    for(int i = 0; i < 10; i++){
        if (n == vetA[i]){
            //printf("n esta no vetor");
            for(int i = 0; i < 10; i++){ // procura se tem o n no vetor, e se os elementos do vetor
                if(vetA[i] != n){        // forem diferentes do n, printa novamente
                    printf("%d\t", vetA[i]);
                }
            }
        }

    }

}

int main()
{
    int vA[10];
    int numero;

    lerVetor(vA, numero);

    return 0;
}
