/*
O que será impresso, exatamente, pelo programa abaixo, assumindo que o valor de D na
declaração de x é o valor do último dígito do seu RA.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D = 0;

    printf("Digite o ultimo digito do seu RA: \n");
    scanf("%d", D);

    int x = 1+D, y = 0;
    for(int j = 2; x != 0; j--){
        y = (x % 2 ) + 5 * y;
        x = x/2;
        printf("x = %d, y = %d\n", x, j);
    }
    while (y != 0){
        x = y % 10;
        y = y/2;
        printf("x = %d, y = %d\n", x, y);
    }

    return 0;
}
