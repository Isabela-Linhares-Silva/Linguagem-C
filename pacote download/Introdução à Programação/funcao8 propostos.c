#include<stdio.h>
#include<stdlib.h>
void fat(int a)
{
    int f=1;
    for (int i=1;i<=a;i++)
    {
        f*=i;
    }
    printf("O fatorial de %d eh: %d",a,f);
}
int main()
{
    int num;
    printf("Digite um numero para saber o seu fatorial: ");
    scanf("%d",&num);
    fat(num);
    return 0;
}
