/*
Modifique o programa do exercício anterior para calcular a resistência de 4 equipamentos. Qual
desses equipamentos possui maior menor resistividade? Seu programa deverá exibir a resposta na
tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t1 = 0, t2 = 0, t3 = 0, t4 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0;

    printf("Informe a primeira tensao: \n");
    scanf("%f", &t1);
    printf("Informe a primera potencia: \n");
    scanf("f", &p1);
    printf("Informe a segunda tensao: \n");
    scanf("%f", &t2);
    printf("Informe a segunda potencia: \n");
    scanf("%f", &p2);
    printf("Informe a terceira tensao: \n");
    scanf("%f", &t3);
    printf("Informe a terceira potencia: \n");
    scanf("%f", &p3);
    printf("Informe a quarta tensao: \n");
    scanf("%f", &t4);
    printf("Informe a quarta potencia: \n");
    scanf("%f", &p4);


    i1 = p1/t1;
    i2 = p2/t2;
    i3 = p3/t3;
    i4 = p4/t4;

    r1 = t1/i1;
    r2 = t2/i2;
    r3 = t3/i3;
    r4 = t4/i4;

    printf("A resistencia do primeiro equipamento eh %.2f\n", r1);
    printf("A resistencia do primeiro equipamento eh %.2f\n", r2);
    printf("A resistencia do primeiro equipamento eh %.2f\n", r3);
    printf("A resistencia do primeiro equipamento eh %.2f\n", r4);

    if (r1 > r2 && r1 > r3 && r1 > r4)
        printf("A maior resistencia eh %f", r1);
    else if  (r2 > r1 && r2 > r3 && r2 > r4)
        printf("A maior resistencia eh %f", r2);
    else if (r3 > r1 && r3 > r2 && r3 > r4)
        printf("A maior resistencia eh %f", r3);
    else
        printf("A maior resistencia eh %f", r4);


    return 0;
}
