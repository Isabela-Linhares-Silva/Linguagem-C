#include<stdio.h>
#include<stdlib.h>
int veri(int a,int b, int c)
{
    int soma=0;
    if(b<=c)
    {
       for(int i=b;i<=c;i++)
        {
            if(i%a==0)
            {

                soma+=i;
            }
        }
    }
    else{
        for(int i=b;i>=c;i--)
        {
            if(i%a==0)
            {

                soma+=i;
            }
        }
    }

    return soma;
}
int main ()
{
    int a,b,c;

    do{
        printf("Digite um numero maior que 1: ");
        scanf("%d",&a);
    }while(a<=1);
        printf("Digite outro numero: ");
        scanf("%d",&b);
        printf("Digite um ultimo numero: ");
        scanf("%d",&c);
        int result;
        result=veri(a,b,c);
        printf("A soma dos numeros entre %d e %d que sao divisiveis por %d eh: %d",b,c,a,result);


}
