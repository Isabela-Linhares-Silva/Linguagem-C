#include<stdio.h>
#include<stdlib.h>
int consulta(int numero)
{
    if(numero>=0)
    {
        return 1;
    }else{
    return 0;}
}

int main()
{
    int num,resu;
    printf("Digite um numero: ");
    scanf("%d",&num);
    resu=consulta(num);
    printf("O resultado eh:%d",resu);
    return 0;
}
