#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,fat;
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &n);
    for(fat=1;n>1;n--)
    {
        fat = n*fat;

    }
    printf("%d ",fat);
    return 0;
}
