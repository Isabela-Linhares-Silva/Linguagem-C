#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int vet[7];
    for(int i=0;i<7;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<7;i++)
    {
        if(vet[i]%2==0&&vet[i]%3==0)
        {
            printf("Multiplo de 2 e 3: %d\n",vet[i]);
        }
        else if(vet[i]%2==0)
        {
            printf("Multiplo de 2: %d\n",vet[i]);
        }
        else if(vet[i]%3==0)
        {
            printf("Multiplo de 3: %d\n",vet[i]);
        }
    }
    return 0;
}

