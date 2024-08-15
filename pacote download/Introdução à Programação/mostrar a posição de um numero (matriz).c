#include<stdio.h>
#include<stdlib.h>

int main()
{
    int mat[5][5],num,x=0;
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("Informe um numero: ");
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if(num==mat[i][j])
            {
                printf("O numero escolhido esta na posicao [%d][%d]",i,j);
                x++;
            }
        }
    }
    if(x==0)
    {
        printf("O numero escolhido nao foi encontrado");
    }

    return 0;
}
