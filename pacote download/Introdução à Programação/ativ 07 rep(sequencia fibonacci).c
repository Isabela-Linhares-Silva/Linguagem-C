#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1=0,num2=1, cont,i;
    printf("%d %d ",num1,num2);
    for(i=1; i<=6;i++)
    {
        cont = num1+num2;
        printf("%d ",cont);
        num1 = num2;
        num2 = cont;
    }

    return 0;
}
