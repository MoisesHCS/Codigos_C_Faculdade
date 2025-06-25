/*
Resolva o exerc�cio abaixo e anexe a solu��o - arquivo "main.c".
Suponha que a conta de energia de uma fam�lia est� duplicando em anos �mpares e triplicando em anos pares. Dessa forma, deseja-se saber os valores das contas ao longo de 12 anos. Assim, seu programa deve pedir para a fam�lia informar qual foi o valor gasto no primeiro ano e guardar na primeira posi��o de um vetor que representar� os anos em quest�o. Depois, preencha esse vetor com os valores das contas para os demais anos atrav�s de um la�o de repeti��o. Tamb�m, seu programa dever� calcular qual foi a m�dia de gasto com energia ao longo dos 12 anos.

No final, seu programa dever� exibir o seguinte relat�rio:
O hist�rico completo de contas (todos os valores do vetor);
A frase "A media geral de gastos ao longo dos 12 anos foi: R$XXX.XX"
Exemplo: Valor informado pela fam�lia: 1, seu vetor dever� conter: 1, 2, 6, 12, 36... e assim sucessivamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float contas[12];
    float soma = 0;
    float media;
    int i;

    printf("informe o valor gasto no primeiro ano: ");
    scanf("%f", &contas[0]);

    for (i = 1; i < 12; i++) {
        if ((i + 1) % 2 == 0) {
            contas[i] = contas [i - 1]* 3;
        }else {
            contas[i] = contas[i-1]*2;
        }
    }

    for(i = 0; i < 12; i++){
        soma += contas[i];
    }
    media = soma/12;

    printf("Historico completo de contas:\n");

    for(i = 0; i < 12; i++){
        printf("%.2f\n", contas[i]);
    }

    printf("A media geral de gastos ao longo dos 12 anos foi: R$%.2f", media);

    return 0;
}
