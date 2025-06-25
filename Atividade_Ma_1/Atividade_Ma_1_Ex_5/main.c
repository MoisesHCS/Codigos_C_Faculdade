/*
Construa um programa para auxiliar na gest�o de pessoas de um parque de divers�es. O parque
ser� inaugurado na pr�xima sexta-feira e permitir� o cadastro de, no m�ximo, 50 convidados. O
cadastro � feito a partir de uma �nica informa��o, a altura da pessoa. Nesse parque, existem
in�meros brinquedos, e o mais desejado chama-se Speed-FHO Rollercoaster. Por�m, essa
montanha-russa tem restri��es de alturas (m�nima e m�xima) e de tamanho da fila de espera.
Sabendo disso, construa um programa que leia as alturas de todos os convidados, salvando-as em
um vetor, as alturas m�nima e m�xima e o tamanho m�ximo da fila da montanha-russa. Ap�s isso,
calcule e exiba quantas pessoas poder�o andar na montanha-russa e se a fila estar� cheia ou n�o.
Exemplo de informa��es digitadas pelo usu�rio:
Altura m�nima: 175
Altura m�xima: 190
M�ximo permitido na fila: 10
Alturas dos convidados: [160, 170, 155, 145, 200, 195, 184, 180, 191, 172]
Resposta: 2, a fila n�o est� cheia.
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
