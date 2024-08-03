#include <stdio.h>
#include<stdlib.h>
#define tam 3
int main()
{
    int qtd[tam];
    float valor[tam],tot_valor[tam];
    for (int i=0;i<tam;i++)
    {
        printf("Informe o preco do objeto %d: R$",i+1);
        scanf("%f",&valor[i]);
        printf("Informe a quantidade de vendas do objeto %d: ",i+1);
        scanf("%d",&qtd[i]);
        tot_valor[i]= valor[i]*qtd[i];
    }
     printf("RELATORIO\n");
    for (int i=0;i<tam;i++)
    {

        printf("Objeto %d",i+1);
        printf("\nQuantidade vendida:%d",qtd[i]);
        printf("\nValor unitario: R$%.2f",valor[i]);
        printf("\nTotal faturado:R$%.2f\n\n",tot_valor[i]);
    }

    return 0;
}
