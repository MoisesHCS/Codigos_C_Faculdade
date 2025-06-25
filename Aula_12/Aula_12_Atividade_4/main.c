/*
4) Fa�a um programa que leia duas sequ�ncias de n�meros inteiros distintos e salve cada uma
em um vetor, sabendo que o n�mero m�ximo de elementos de uma sequ�ncia � 20. Imagine

que esses vetores s�o conjuntos de elementos. Assim, seu programa dever� conter uma
fun��o capaz de salvar em um terceiro vetor o resultado da interse��o dos dois primeiros
vetores e imprimir o resultado.
Exemplo: v1: [1, 2, 3, 4, 5]
v2: [2, 5, 7, 1,-9, 18]
Resultado: [1, 2, 5]
*/

#include <stdio.h>
#include <stdlib.h>

void lerSalvarVetores(int vetA[], int vetB[]){
    int tam1, tam2, contador = 0;
    printf("Digite o tamanho do vetor A (max 20 elementos): \n"); //aqui eu coleto o tamanho do vetor A
    scanf("%d", &tam1);
    for(int i = 0; i < tam1; i++){
        printf("Digite o %d elemento do vetor A: \n", i + 1); //aqui eu coleto cada elemento do vetor A
        scanf("%d", &vetA[i]);
    }
    for(int i = 0; i < tam1; i++){ //aqui eu printo o vetor A com os elementos
        printf("%d\t", vetA[i]);
    }
    printf("\n");

    printf("Digite o tamanho do vetor B (max 20 elementos): \n"); //aqui eu coleto o tamanho do vetor B
    scanf("%d", &tam2);
    for(int j = 0; j < tam2; j++){
        printf("Digite o %d elemento do vetor B: \n", j + 1);  //aqui eu coleto cada elemento do vetor B
        scanf("%d", &vetB[j]);
    }
    for(int j = 0; j < tam2; j++){ //aqui eu printo o vetor B com os elementos
        printf("%d\t", vetB[j]);
    }
    printf("\n");

    //Primeiro eu defino k como um contador. Depois percorro os dois vetores, vendo
    //quais elementos s�o iguais no A e no B. Caso tiver algum, eu jogo no novo vetor C e aumento um no contador
    //para passar para a proxima posi��o
    int k = 0;
    int vetC[k];
    for(int i = 0; i < tam1; i++){
        for(int j = 0; j < tam2; j++){
            if(vetA[i] == vetB[j]){
                //printf("oi");
                //contador++;
                printf("Vetor : %d\n", vetA[i]);
                vetC[k] = vetA[i];
                k++;
            }
        }
    }

    //como ja usei o k para o contador, vou usar a letra l. For simples, para printar o vetor C
    printf("Vetor C: \n");
    for(int l = 0; l < k; l++){
        printf("%d\t", vetC[l]);
    }

}

int main()
{
    int vA[20], vB[20];

    lerSalvarVetores(vA,vB);

    return 0;
}
