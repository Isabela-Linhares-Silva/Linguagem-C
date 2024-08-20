#include<stdlib.h>
#include<stdio.h>
#define mes 12
#define semana 4
int main()
{
    float vendas[mes][semana],soma_mes[mes]={0},soma_ano=0;
    for(int i=0;i<mes;i++)
    {
        for(int j=0;j<semana;j++)
        {
            printf("Informe o valor das vendas do mes %d semana %d: ",i+1,j+1);
            scanf("%f",&vendas[i][j]);
            soma_mes[i]+=vendas[i][j];
        }
        soma_ano+=soma_mes[i];
    }

    for(int i=0;i<mes;i++)
    {
        switch(i)
        {
        case 0:
            printf("\nNo mes de janeiro foi vendido: R$%.2f\n ",soma_mes[i]);
            break;
        case 1:
            printf("\nNo mes de fevereiro foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 2:
            printf("\nNo mes de marco foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 3:
            printf("\nNo mes de abril foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 4:
            printf("\nNo mes de maio foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 5:
            printf("\nNo mes de junho foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 6:
            printf("\nNo mes de julho foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 7:
            printf("\nNo mes de agosto foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 8:
            printf("\nNo mes de setembro foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 9:
            printf("\nNo mes de outubro foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 10:
            printf("\nNo mes de novembro foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        case 11:
            printf("\nNo mes de dezembro foi vendido: R$%.2f \n",soma_mes[i]);
            break;
        }
        for(int j=0;j<semana;j++)
        {
            printf("Valor da venda da semana %d do mes %d: R$%.2f\n",j+1,i+1,vendas[i][j]);
        }
    }
    printf("\nTotal faturado no ano: R$%.2f",soma_ano);

    return 0;
}
