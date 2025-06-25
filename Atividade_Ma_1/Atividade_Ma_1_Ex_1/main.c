/*
Construa um programa que transforme Celsius em Fahrenheit e vice-versa. Leia um único
caractere F ou C, o qual indica se o próximo valor informado será uma temperatura em Celsius ou
Fahrenheit. Após isso, o programa deve pedir o valor da temperatura e então imprimir o resultado
correspondente da temperatura na outra unidade de medida.
Sabe-se que a conversão é dada pela fórmula: C = 5/9 x (F − 32)
*/

#include <stdio.h>
#include <stdlib.h>

//C = 5/9 * (F - 32)  C = 5/9 F - 160/9  C + 160/9 = 5/9 F = 9C + 32

int main()
{
    char tipo;
    float temp = 0, resultado = 0;

    printf("Digite F para Farenheit e C para Celsius:\n");
    scanf("%s", &tipo);

    printf("Digite um valor para essa temperatura: \n");
    scanf("%f", &temp);

    if (tipo == 'F'){
        resultado = (5/9)*(temp - 32);
        printf("A temperatura em Celsius eh %.2f C\n", resultado);
    }
    else if (tipo == 'C') {
        resultado = (9*temp) + 32;
        printf("A temperatura em Farenheit eh %.2f\n", resultado);
    }

    return 0;
}
