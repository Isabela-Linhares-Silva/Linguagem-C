#include<stdio.h>
#include<stdlib.h>
int sub(int a,int b){
    int subtracao=0;
    if(a>b){
        subtracao=a-b;
    }
    else{
        subtracao=b-a;
    }
    return subtracao;
}
int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    printf("%d",sub(num1,num2));
    return 0;
}

