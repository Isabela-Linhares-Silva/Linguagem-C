#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main ()
{
    int vet[tam],vetpar[tam],vetimp[tam],contpar=0,contimp=0;
    for(int i=0; i<tam; i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&vet[i]);
    }
    for(int i=0; i<tam;i++)
    {
             if(vet[i]%2==0)
            {
                vetpar[contpar]=vet[i];
                contpar++;
            }
            else{
                vetimp[contimp]=vet[i];
                contimp++;
            }
    }
    printf("Os numeros pares sao: ");
    for(int i=0; i<contpar; i++)
    {
        printf("%d ",vetpar[i]);
    }
    printf("\nOs numeros impares sao: ");
    for(int i=0; i<contimp; i++)
    {
        printf("%d ",vetimp[i]);
    }


    return 0;
}
