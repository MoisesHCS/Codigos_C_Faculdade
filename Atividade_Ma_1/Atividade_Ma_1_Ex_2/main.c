/*
Para se aposentar, uma pessoa deve atender alguma das situa��es abaixo:
a. Sexo Masculino, idade m�nima de 63 e 6 meses anos e 35 anos de contribui��o;
b. Sexo Masculino, idade m�nima de 65 anos e 20 anos de contribui��o;
c. Sexo Feminino, idade m�nima de 58 anos e 6 meses e 30 anos de contribui��o;
d. Sexo Feminino, idade m�nima de 62 anos e 15 anos de contribui��o;
Sabendo disso, construa um programa que leia um caractere F ou M, representando o sexo do
indiv�duo, e dois n�meros inteiros, sendo a idade e tempo de contribui��o, respectivamente. O
seu programa dever� exibir �Aposent�vel� se o indiv�duo atender uma das situa��es acima. Caso
contr�rio, o programa deve apresentar �N�o aposent�vel�.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, tempo;

    printf("qual seu sexo M OU f: ");
    scanf("%c", &sexo);

    printf("qual sua idade: (em meses)");
    scanf("%i", &idade);

    printf("qual seu temp� de contibuicao: ");
    scanf("%i", &tempo);


    if((sexo == 'f' || sexo == 'F' ) && idade >= 702 && tempo >= 30){
        printf("aposentavel\n");
    }else if((sexo == 'f' || sexo == 'F' ) && idade >= 744 && tempo >= 15){
        printf("aposentavel\n");
    }else if((sexo == 'm' || sexo == 'M') && idade >= 762 && tempo >= 35){
        printf("aposentavel\n");
    }else if((sexo == 'm' || sexo == 'M') && idade >= 780 && tempo >= 20){
        printf("aposentavel\n");
    }else{
        printf("nao aposentavel\n");
    }
}
