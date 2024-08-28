#include<stdio.h>
#include<stdlib.h>
int mult(int a,int b){
    int multi;
    multi=a*b;
    return multi;
}
int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    printf("%d",mult(num1,num2));
    return 0;
}

