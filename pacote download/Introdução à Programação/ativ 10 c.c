/*
 Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usuário. cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o
segundo, o mês e o terceiro, o ano
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d1,m1,a1,d2,m2,a2;
    printf("Digite a primeira data:\n");
    printf("Dia(dd): ");
    scanf("%d",&d1);
    printf("Mes(mm): ");
    scanf("%d",&m1);
    printf("Ano(aaaa): ");
    scanf("%d",&a1);
    printf("Digite a segunda data:\n");
    printf("Dia(dd): ");
    scanf("%d",&d2);
    printf("Mes(mm): ");
    scanf("%d",&m2);
    printf("Ano(aaaa): ");
    scanf("%d",&a2);
    if (a1> a2)
    {
        printf("A maior data eh: %d-%d-%d", d1, m1,a1);
    }
    else
    {
        if(a2>a1)
        {
          printf("A maior data eh: %d-%d-%d",d2,m2,a2);
        }
        else if(m1>m2)
        {
            printf("A maior data eh: %d-%d-%d",d1,m1,a1);
        }
        else if(m2>m1)
        {
            printf("A maior data eh: %d-%d-%d",d2,m2,a2);
        }
        else if(d1>d2)
        {
            printf("A maior data eh: %d-%d-%d",d1,m1,a1);
        }
        else if(d2>d1)
        {
            printf("A maior data eh: %d-%d-%d",d2,m2,a2);
        }
        else
        {
            printf("As datas sao iguais!");
        }
    }
    return 0;
}
