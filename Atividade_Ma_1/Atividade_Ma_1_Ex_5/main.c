/*
Construa um programa para auxiliar na gestão de pessoas de um parque de diversões. O parque
será inaugurado na próxima sexta-feira e permitirá o cadastro de, no máximo, 50 convidados. O
cadastro é feito a partir de uma única informação, a altura da pessoa. Nesse parque, existem
inúmeros brinquedos, e o mais desejado chama-se Speed-FHO Rollercoaster. Porém, essa
montanha-russa tem restrições de alturas (mínima e máxima) e de tamanho da fila de espera.
Sabendo disso, construa um programa que leia as alturas de todos os convidados, salvando-as em
um vetor, as alturas mínima e máxima e o tamanho máximo da fila da montanha-russa. Após isso,
calcule e exiba quantas pessoas poderão andar na montanha-russa e se a fila estará cheia ou não.
Exemplo de informações digitadas pelo usuário:
Altura mínima: 175
Altura máxima: 190
Máximo permitido na fila: 10
Alturas dos convidados: [160, 170, 155, 145, 200, 195, 184, 180, 191, 172]
Resposta: 2, a fila não está cheia.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade = 0, hmax = 0, hmin = 0, soma = 0;
    int pessoas[50];

    printf("Informe a quantidade de pessoas que estao na fila: \n");
    scanf("%d", &quantidade);

    printf("Informe a altura maxima: \n");
    scanf("%d", &hmax);

    printf("Informe a altura minima: \n");
    scanf("%d", &hmin);

    for (int i = 0; i < quantidade; i++){

        printf("Digite a altura das pessoas: \n", pessoas[i]);
        scanf("%d", &pessoas[i]);

    }

    for (int i = 0; i < quantidade; i++){
        if (pessoas[i] > hmin && pessoas[i] < hmax){
            soma += 1;
        }
    }
    if (soma < 10){
        printf("A fila nao esta cheia\n");
    }
    else {
        printf("A fila esta cheia\n");
    }

    printf("%d pessoas andarao na montanha russa", soma);

    return 0;
}
