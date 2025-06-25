/*
6) Fa�a um programa que solicite o total gasto de um cliente de uma loja, e, utilizando fun��es
fa�a:
a. Imprime as op��es de pagamento, solicita a op��o desejada e imprime o valor total
das presta��es (se houverem). Sabendo que as op��es s�o:
1) Op��o: a vista com 10% de desconto
2) Op��o: em duas vezes (pre�o da etiqueta)
3) Op��o: de 3 at� 10 vezes com 3% de juros ao m�s (somente para compras acima
de R$ 100,00).
*/

#include <stdio.h>
#include <stdlib.h>

float aVista(float total){
    int resultado;
    resultado = 0.9*total;
    return resultado;
}

float duasVezes(float total){
    int resultado;
    resultado = total/2;
    return resultado;
}

float maisVezes(float total, int quantidade_vezes){
    float resultado = 0, taxa = 0.03, juros = 0;

    for(int i = 0; i < quantidade_vezes; i++){
        juros = total*taxa;
        total += juros;
    }

    resultado = total;

    return resultado;
}

int main()
{
    int opcao = 0, vezes = 0;
    float valor_compra = 0, r = 0;
    printf("Digite 1 para opcao a vista, 2 para opcao em duas vezes e 3 para opcao em 3 ate 10 vezes: \n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Digite o valor da compra: \n");
            scanf("%f", &valor_compra);
            r = aVista(valor_compra);
            printf("Valor: R$ %f", r);
    }
    if(opcao == 2){
        printf("Digite o valor da compra: \n");
        scanf("%f", &valor_compra);
        r = duasVezes(valor_compra);
        printf("Valor: Duas parcelas de R$ %f", r);
    }
    if(opcao == 3){
        printf("Digite o valor da compra: \n");
        scanf("%f", &valor_compra);
        if(valor_compra > 100){
            printf("Digite a quantidade de vezes: \n");
            scanf("%d", &vezes);
            r = maisVezes(valor_compra, vezes);
            printf("Valor: %d parcelas de R$ %f", vezes, r);
        }
        else{
            printf("Valor nao corresponde as exigencias");
        }
    }

    return 0;
}
