#include<stdio.h>
#include<stdlib.h>
int entre(int a,int b){
    int soma=0;
    if(a>b){
        int aux;
        aux=a;
        a=b;
        b=aux;
    }
    for(int i=a;i<b;i++){
       soma+=i;
    }
    return soma;

}
int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);

    printf("A soma dos numero entre %d e %d foi: %d",num1,num2,entre(num1,num2));
    return 0;
}
