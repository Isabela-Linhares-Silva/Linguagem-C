#include<stdio.h>
#include<stdlib.h>
void fato(int *a)
{
    int fat[10];
    for(int i=0;i<10;i++)
    {
        fat[i]=1;
        for(int j=1;j<=*a[i];j++)
        {
            fat[i]*=j;
        }
        printf("O fatorial de %d eh: %d\n",*a[i],fat[i]);
    }
}
int main()
{
    int *A[10];
    for (int i=0;i<10;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&*A[i]);
    }
    fato(*A);
    return 0;
}
