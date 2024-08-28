#include<stdio.h>
#include<stdlib.h>
int adicao(int a,int b)
{
    int soma=0;
    if(a>b)
    {
        int aux;
        aux=a;
        a=b;
        b=aux;
    }
    for(int i=a;i<b;i++)
    {
        soma+=i;
    }
    return(soma);
}
int main()
{
    int n1,n2,s;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);
    s= adicao(n1,n2);
    printf("A soma dos numeros numeros entre %d e %d eh: %d",n1,n2,s);
    return 0;
}
