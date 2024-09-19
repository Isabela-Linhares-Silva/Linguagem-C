#include<stdio.h>
#include<stdlib.h>
void positivo(int *x)
{
    int cont=0;
    for(int i=0;i<15;i++)
    {
        if(x[i]%2==0)
        {
            cont++;
        }
    }
    printf("A quantidade de numeros pares eh: %d",cont);
}
int main()
{
    int X[15];
    for(int i=0;i<15;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&X[i]);
    }
    positivo(X);

    return 0;
}
