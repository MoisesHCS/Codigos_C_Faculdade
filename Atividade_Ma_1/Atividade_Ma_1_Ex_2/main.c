/*
Para se aposentar, uma pessoa deve atender alguma das situações abaixo:
a. Sexo Masculino, idade mínima de 63 e 6 meses anos e 35 anos de contribuição;
b. Sexo Masculino, idade mínima de 65 anos e 20 anos de contribuição;
c. Sexo Feminino, idade mínima de 58 anos e 6 meses e 30 anos de contribuição;
d. Sexo Feminino, idade mínima de 62 anos e 15 anos de contribuição;
Sabendo disso, construa um programa que leia um caractere F ou M, representando o sexo do
indivíduo, e dois números inteiros, sendo a idade e tempo de contribuição, respectivamente. O
seu programa deverá exibir “Aposentável” se o indivíduo atender uma das situações acima. Caso
contrário, o programa deve apresentar “Não aposentável”.
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

    printf("qual seu tempó de contibuicao: ");
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
