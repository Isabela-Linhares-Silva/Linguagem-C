#include<stdio.h>
#include<stdlib.h>
int d(int *a,int *b)
{
    int aux,i;
    if(*a%*b==0)
    {
        return 0;
    }
    else{
            for(i=*b+1;i<=*a;i++)
            {
                if(*a%i==0)
                {
                    return i;
                }
            }
        }
}

int main()
{
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digte outro numero: ");
    scanf("%d",&num2);
    int resultado= d(&num1,&num2);
    printf("%d",resultado);

    return 0;
}
