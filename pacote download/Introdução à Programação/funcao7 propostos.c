#include<stdio.h>
#include<stdlib.h>
int calculo()
{
    int v,cont=0;
    float soma=0;
    do{
        printf("Informe um valor('0' para finalizar): ");
        scanf("%d",&v);
        if(v>0)
        {
            soma+=v;
            cont++;
        }
    }while(v!=0);
    if (cont>0)
    {
        return soma/cont;
    }
    else{
        return 0;
    }
}
int main()
{
    float media= calculo();
    if(media>0)
    {
        printf("A media dos numeros positivos digitados eh: %.2f",media);
    }
    else
    {
        printf("Nao houve numeros positivos digitados!");
    }
    return 0;
}
