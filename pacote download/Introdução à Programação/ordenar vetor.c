#include<stdio.h>
#include<stdlib.h>
#define tam 5
int main()
{
    int vet[tam],aux;
    for (int i=0;i<tam;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }
    for (int i=0;i<tam;i++)
    {
       printf("%d ",vet[i]);
    }

    for(int i=0;i<tam;i++)
    {
        for (int j=0;j<tam;j++)
        {
            if(vet[i]<vet[j])
            {
                aux= vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    printf("\nOrdenado: \n");
    for (int i=0;i<tam;i++)
    {
       printf("%d ",vet[i]);
    }
    return 0;
}
