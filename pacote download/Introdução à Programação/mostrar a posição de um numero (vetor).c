#include<stdio.h>
#include<stdlib.h>
#define num 20
int main()
{
    int vet[num],numqualquer,i,j=0;
    for(i=0;i<num;i++)
    {
        printf("Informe o %d numero: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("Escolha um numero qualquer: ");
    scanf("%d",&numqualquer);
    for(i=0;i<num;i++)
    {
        if(numqualquer==vet[i])
        {
            printf("O numero escolhido esta na %d posicao",i);
            j++;
        }
    }
    if(j==0)
    {
        printf("O numero escolhido nao foi encontrado");
    }

    return 0;
}
