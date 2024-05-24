#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[4],i,j,aux=0;
    for(i=1;i<5;i++)
    {
        printf("Informe um valor: ");
        scanf("%d",&vet[i]);
    }
    for(i=1;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(vet[i]>vet[j])
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    printf("A ordem crescente dos numeros inseridos eh:\n");
    for(i=1;i<5;i++)
    {
        printf("{%d}",vet[i]);
    }
    return 0;
}
