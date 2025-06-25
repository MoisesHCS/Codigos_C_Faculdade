/*
Faça um programa que calcule e exiba na tela os volumes de três esferas, sendo fornecido o valor
de seu raio (R). A fórmula para o cálculo é:

V = 4/3 * PI * R 3

Considere PI = 3.14159
Além disso, seu programa deve ser capaz de indicar qual dos volumes é o maior dentre todos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1 = 0, r2 = 0, r3 = 0;

    printf("Digite o valor do primeiro raio: \n");
    scanf("%f", &r1);
    printf("Digite o valor do segundo raio: \n");
    scanf("%f", &r2);
    printf("Digite o valor do terceiro raio: \n");
    scanf("%f", &r3);

    printf("O volume da primeira esfera: %.2f\n", 4/3*3.14159*r1*r1*r1);
    printf("O volume da segunda esfera: %.2f\n", 4/3*3.14159*r2*r2*r2);
    printf("O volume da terceira esfera: %.2f\n", 4/3*3.14159*r3*r3*r3);

    if (r1 >= r2 && r1 >= r3)
        printf("O primeiro volume eh maior");
    else if (r2 >= r1 && r2 >= r3)
        printf("O segundo volume eh maior");
    else
        printf("O terceiro volume eh maior");

    return 0;
}
