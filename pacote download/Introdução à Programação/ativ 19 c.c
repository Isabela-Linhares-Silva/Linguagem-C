#include<stdio.h>
#include<stdlib.h>
int main()
{
    float alt,peso;
    printf("Informe sua altura(a.aa) e peso:\n");
    scanf("%f %f",&alt,&peso);
    if (alt<1.20)
    {
        if(peso<=60)
        {
            printf("Classificacao: A");
        }
        else if(peso<=90)
        {
            printf("Classificacao: D");
        }
        else
        {
            printf("Classificacao: G");
        }
    }
    else if(alt<=1.70)
    {
        if (peso<=60)
        {
            printf("Classificacao: B");
        }
        else if (peso<=90)
        {
            printf("Classificacao: E");
        }
        else
        {
            printf("Classificacao: H");
        }
    }
    else
    {
        if (peso<=60)
        {
            printf("Classificacao: C");
        }
        else if(peso<=90)
        {
            printf("Classisficacao: F");
        }
        else
        {
            printf("Classificacao: I");
        }
    }
    return 0;
}
