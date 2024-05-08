#include<stdio.h>
#include<stdlib.h>
int main()
{
    float pre_atual,novo_pre;
    int venda;
    printf("Digite o preco atual: ");
    scanf("%f",&pre_atual);
    printf("Informe a venda media mensal: ");
    scanf("%d",&venda);
    if(venda <500 || pre_atual<30)
    {
        novo_pre = pre_atual+(pre_atual*0.1);
    }
    else if (venda<1200|| pre_atual<80)
    {
        novo_pre= pre_atual+(pre_atual*0.15);
    }
    else
    {
        novo_pre = pre_atual-(pre_atual*0.2);
    }
    printf("O novo preco do produto sera de: R$%.2f",novo_pre);
    return 0;
}
