#include<stdio.h>
#include<stdlib.h>
void soma(float *x)
{
    float s=0;
    for(int i=0;i<20;i++)
    {
        s+=x[i];
    }
    printf("A soma dos numeros digitados eh: %.2f",s);
}
int main()
{
    float X[20];
    for(int i=0;i<20;i++)
    {
        printf("Digite um numero real: ");
        scanf("%f",&X[i]);
    }
    soma(X);
    return 0;
}
