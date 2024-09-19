#include<stdio.h>
#include<stdlib.h>
int potencia(int a,int b)
{
    int resul=1;
    if(b==0)
    {
        return resul;
    }
    else
    {
        for(int i=1;i<=b;i++)
        {
            resul*=a;
        }
        return resul;
    }
}
int main()
{
    int x,z;
    printf("Informe um numero: ");
    scanf("%d",&x);
    printf("Informe outro numero: ");
    scanf("%d",&z);
    int resultado=potencia(x,z);
    printf("%d elevado a %d eh: %d",x,z,resultado);

    return 0;
}
