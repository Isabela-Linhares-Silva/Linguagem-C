#include<stdio.h>
#include<stdlib.h>
int maioreh(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}
int main()
{
    int num1,num2,num3;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    printf("Digite outro numero: ");
    scanf("%d",&num3);

    printf("O maior numero digitado foi: %d",maioreh(num1,num2,num3));
    return 0;
}


