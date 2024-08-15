#include<stdlib.h>
#include<stdio.h>
#define tam 10
int main()
{
    int vet1[tam],vet2[tam],vet3[tam*2],aux,j;
    printf("Vetor 1\n");
    for(int i=0;i<tam;i++)
    {
        printf("Digite: ");
        scanf("%d",&vet1[i]);
        vet3[i]=vet1[i];
    }
    j=10;
    printf("Vetor 2\n");
    for(int i=0;i<tam;i++)
    {
        printf("Digite: ");
        scanf("%d",&vet2[i]);
        vet3[j]=vet2[i];
        j++;
    }
    for(int i=0;i<20;i++)
    {
        for (int j=0;j<20;j++)
        {
           if(vet3[i]>vet3[j])
           {
                aux= vet3[i];
                vet3[i]=vet3[j];
                vet3[j]=aux;
           }
        }
    }
    printf("Ordem decrescente\n");
    for(int i=0;i<20;i++)
    {
        printf("%d ",vet3[i]);
    }
    return 0;
}
