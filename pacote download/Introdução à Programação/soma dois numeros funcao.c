#include<stdio.h>
#include<stdlib.h>
int adicao(int a,int b){
    int soma=0;
    soma=a+b;
    return soma;
}
int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    printf("%d",adicao(num1,num2));
    return 0;
}

