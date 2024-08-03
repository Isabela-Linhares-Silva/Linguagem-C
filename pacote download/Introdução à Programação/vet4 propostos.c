#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vet[5];
    for (int i=0;i<5;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet[i]);
    }
    for (int i=0;i<5;i++)
    {
        if(vet[i]==30)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}
