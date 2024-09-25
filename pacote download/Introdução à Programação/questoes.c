#include<stdio.h>
#include<stdlib.h>
void adicao(int *n)
{
    int soma=0;
    for(int i=1;i<*n;i++)
    {
        if(*n%i==0)
        {
            soma+=i;
        }
    }
    printf("A soma dos divisores de %d eh: %d",*n,soma);

}
int main()
{
    int num;
    printf("Digite um  numero inteiro e positivo: ");
    scanf("%d",&num);
    adicao(&num);

    return 0;
}
