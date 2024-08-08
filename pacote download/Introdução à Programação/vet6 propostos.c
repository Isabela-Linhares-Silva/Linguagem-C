#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define nv 5
int main ()
{
    int tot_vendas=0;
    float vendas[nv],comissao[nv],valor_comissao[nv],maior_valor=0,menor_valor=0;
    char nomes[nv][50],nome_maior[50],nome_menor[50];

    for(int i=0;i<nv;i++)
    {
        printf("Informe o nome do vendedor %d:",i+1);
        scanf("%s",&nomes[i]);
        printf("Informe o total de vendas de %s:",nomes[i]);
        scanf("%f",&vendas[i]);
        printf("Informe o percentual de comissao de %s:",nomes[i]);
        scanf("%f",&comissao[i]);
        printf("\n");
        valor_comissao[i] = (comissao[i]*vendas[i])/100;
        tot_vendas+=vendas[i];
        if(i==0)
        {
          maior_valor =valor_comissao[i];
          menor_valor=valor_comissao[i];
          strcpy(nome_maior,nomes[i]);
          strcpy(nome_menor,nomes[i]);
        }
        else{
            if(valor_comissao[i]>maior_valor)
            {
                maior_valor= valor_comissao[i];
                strcpy(nome_maior,nomes[i]);
            }
            if(valor_comissao[i]<maior_valor)
            {
                menor_valor= valor_comissao[i];
                strcpy(nome_menor,nomes[i]);
            }
        }
    }
    printf("\n----------Relatorio comissoes----------\n");
    for(int i=0;i<nv;i++)
    {
            printf("Vendedor %s tem R$%.2f de comissao a receber",nomes[i],valor_comissao[i]);
    }
    printf("O total das vendas de todos os vendedores foi: %d\n",tot_vendas);
    printf("O maior valor a receber foi de R$%.2f e o %s receberá\n",maior_valor,nome_maior);
    printf("O menor valor a receber foi de R$%.2f e o %s o receberá",menor_valor,nome_menor);

    return 0;
}
