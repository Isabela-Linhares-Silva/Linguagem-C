#include<stdio.h>
#include<stdlib.h>
int mostre(int a){

    if(a>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);
    printf("%d",mostre(num));
    return 0;
}
