/*
Crie um programa que leia dois valores inteiros do teclado e escreva na tela:
a. O dobro do primeiro n�mero
b. A multiplica��o entre o primeiro e o segundo n�mero
c. O resto da divis�o entre o primeiro e o segundo n�mero
d. A divis�o inteira entre o primeiro e o segundo n�mero;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1 = 0, n2 = 0;

   printf("Informe o primeiro numero:\n");
   scanf("%d", &n1);
   printf("Informe o segundo numero:\n");
   scanf("%d", &n2);
   printf("O dobro do primeiro numero eh: %d\n", n1*2 );
   printf("A multiplicacao entre o primeiro e o segundo numero eh: %d\n", n1*n2);
   printf("O resto da divis�o entre o primeiro e o segundo numero eh: %d\n", n1%n2);
   printf("A divis�o inteira entre o primeiro e o segundo numero eh: %d\n", n1/n2);
}
