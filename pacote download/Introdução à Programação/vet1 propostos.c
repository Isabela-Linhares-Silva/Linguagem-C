#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int vet[6];
    for(int i=0;i<6;i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet[i]);
    }
    int contp=0,conti=0;
    for(int i=0;i<6;i++)
    {
        if(vet[i]%2==0)
        {
            printf("%d ",vet[i]);
            contp++;
        }
        else
        {
            printf("%d ",vet[i]);
            conti++;
        }
    }
    printf("\nA quantidade de numeros pares eh: %d",contp);
    printf("\nA quantidade de numeros impares eh: %d",conti);
    return 0;
}
