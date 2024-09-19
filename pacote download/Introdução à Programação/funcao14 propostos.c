#include<stdio.h>
#include<stdlib.h>
void maiormenorzero(int *v)
{
    int A[30],B[30],contA=0,contB=0;
    for(int i=0;i<30;i++)
    {
        if(v[i]>0)
        {
            A[contA++]=v[i];
        }
        else{
            B[contB++]=v[i];
        }
    }
    if(contA>0)
    {
        printf("Numeros positivos: ");
        for(int i=0;i<contA;i++)
        {
            printf("%d ",A[i]);
        }
        printf("\n");
    }
    else{
        printf("Nao foram digitados numeros positivos!\n");
    }
    if(contB>0)
    {
        printf("Numeros negativos: ");
        for(int i=0;i<contB;i++)
        {
            printf("%d ",B[i]);
        }
        printf("\n");
    }
    else{
        printf("Nao foram digitados numeros negativos ou 0's!\n");
    }
}
int main()
{
    int vet[30];
    for (int i=0;i<30;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet[i]);
    }
    maiormenorzero(vet);


    return 0;
}
