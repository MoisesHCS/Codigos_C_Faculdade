/*
Escreva um programa lê três números e os imprime em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &n3);

    if (n1> n2 && n2>n3 && n1>n3)
        printf("%d %d %d", n1, n2, n3);
    if (n2> n1 && n1>n3 && n2>n3)
        printf("%d %d %d", n2, n1, n3);
    if (n3> n1 && n2>n1 && n3>n2)
        printf("%d %d %d", n3, n2, n1);
    if (n1> n2 && n3>n2 && n1>n3)
        printf("%d %d %d", n1, n3, n2);
    if (n2> n3 && n3>n1 && n2>n1)
        printf("%d %d %d", n2, n3, n1);
    if (n3> n2 && n1>n2 && n3>n1)
        printf("%d %d %d", n3, n1, n2);

    return 0;
}
