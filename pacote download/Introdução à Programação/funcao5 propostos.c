#include<stdio.h>
#include<stdlib.h>
void rotina(int a)
{
    printf("Informe um numero: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Numero positivo!");
    }
    else{
        printf("Numero negativo!");
    }
}
int main()
{
    int num;
    rotina(num);
    return 0;
}
