#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vet[5],soma=0;
    for(int i=0;i<5;i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&vet[i]);
        soma+=vet[i];
    }
    printf("Os numeros digitados foram: %d + %d + %d + %d + %d = %d",vet[0],vet[1],vet[2],vet[3],vet[4],soma);

    return 0;
}
