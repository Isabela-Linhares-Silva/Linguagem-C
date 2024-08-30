#include<stdio.h>
#include<stdlib.h>
int mm(int * maior_p,int *menor_p)
{
    int num;
    for(int i=1;i<=5;i++){
        printf("Informe um numero: ");
        scanf("%d",&num);
        if(i==1)
        {
            *maior_p=num;
            *menor_p=num;
        }
        else{
            if(num>*maior_p)
            {
                *maior_p=num;
            }
            if(num<*menor_p)
            {
                *menor_p=num;
            }
        }
    }
}
int main()
{
    int maior,menor;
    mm(&maior,&menor);
    printf("Maior %d \nMenor %d",maior,menor);

    return 0;
}
