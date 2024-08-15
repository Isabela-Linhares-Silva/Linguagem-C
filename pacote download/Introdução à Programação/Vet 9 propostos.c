#include<stdlib.h>
#include<stdio.h>
#define tam 10
int main()
{
    char produto[tam][50];
    int cod[tam],aux[tam];
    float preco[tam],n_preco[tam];
    for(int i=0;i<tam;i++)
    {
        printf("Nome do produto: ");
        fflush(stdin);
        gets(produto[i]);
        printf("Informe o codigo de %s: ",produto[i]);
        scanf("%d",&cod[i]);
        printf("Informe o preco de %s:R$ ",produto[i]);
        scanf("%f",&preco[i]);
    }
    for (int i=0;i<tam;i++)
    {
        if(cod[i]%2==0&&preco[i]>1000)
        {
            n_preco[i]=(preco[i]*0.2)+preco[i];
            aux[i]=1;
        }
        else if(cod[i]%2==0)
        {
            n_preco[i]=(preco[i]*0.15)+preco[i];
            aux[i]=1;
        }
        else if(preco[i]>1000)
        {
            n_preco[i]=(preco[i]*0.1)+preco[i];
            aux[i]=1;
        }

    }

    printf("\nRELATORIO\n");

    for (int i=0;i<tam;i++)
    {
        if(aux[i]==1)
        {
            printf("\nProduto com alteracao: \n");
            printf("Nome: %s\n",produto[i]);
            printf("Codigo: %d\n",cod[i]);
            printf("Preco: %.2f\n",preco[i]);
            printf("Novo preco: %.2f\n",n_preco[i]);
        }

    }

    return 0;
}
