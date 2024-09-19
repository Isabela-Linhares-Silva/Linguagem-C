#include<stdio.h>
#include<stdlib.h>
void mdc(int a,int b)
{
    while(b!=0)
    {
        int aux=b;
        b=a%b;
        a=aux;
    }
    printf("O MDC sera: %d",a);
}
int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    mdc(num1,num2);

}
