#include<stdio.h>
#include<stdlib.h>
void interseccao(int *a,int *b)
{
    int C[10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==b[j])
            {

            }
        }
    }
}
int main()
{
    int A[5],B[5];
    printf("Vetor A \n");
    for(int i=0;i<5;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&A[i]);
    }
    printf("Vetor B \n");
    for(int i=0;i<5;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&B[i]);
    }
    return 0;
}
