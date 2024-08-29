#include<stdio.h>
#include<stdlib.h>
void mu(int a)
{
    int cont=1,mul;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=cont;j++)
        {
            mul=i*j;
            printf("%d\t",mul);
        }
        printf("\n");
        cont++;
    }

}
int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);
    mu(num);
    return 0;
}
