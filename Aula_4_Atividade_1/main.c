/*
Resolva o exercício abaixo e anexe a solução - arquivo "main.c".
Suponha que a conta de energia de uma família está duplicando em anos ímpares e triplicando em anos pares. Dessa forma, deseja-se saber os valores das contas ao longo de 12 anos. Assim, seu programa deve pedir para a família informar qual foi o valor gasto no primeiro ano e guardar na primeira posição de um vetor que representará os anos em questão. Depois, preencha esse vetor com os valores das contas para os demais anos através de um laço de repetição. Também, seu programa deverá calcular qual foi a média de gasto com energia ao longo dos 12 anos.

No final, seu programa deverá exibir o seguinte relatório:
O histórico completo de contas (todos os valores do vetor);
A frase "A media geral de gastos ao longo dos 12 anos foi: R$XXX.XX"
Exemplo: Valor informado pela família: 1, seu vetor deverá conter: 1, 2, 6, 12, 36... e assim sucessivamente.
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
