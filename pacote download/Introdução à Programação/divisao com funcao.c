#include<stdio.h>
#include<stdlib.h>
float divisao(int a,int b){
    float divi;
    if (b==0)
    {
        return -1;
    }
    else{
        divi=a/(float)b;
        return divi;
    }

}
int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    float res= divisao(num1,num2);
    if(res!=-1){
        printf("%.2f\n",res);
    }
    else{
        printf("Divisao invalida!");
    }
    return 0;
}

