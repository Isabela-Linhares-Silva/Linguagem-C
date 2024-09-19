#include<stdio.h>
#include<stdlib.h>
float soma_div(int a)
{
    int divs=0;
    if(a<0)
    {
        return 0.0;
    }
    else{
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                divs+=i;


            }
        }

        return divs;
    }
}
int main()
{
    int num;
    float sd;
    printf("Digite um numero: ");
    scanf("%d",&num);
    sd=soma_div(num);
    printf("A soma dos divisores de %d eh: %.2f",num,sd);
    return 0;
}
