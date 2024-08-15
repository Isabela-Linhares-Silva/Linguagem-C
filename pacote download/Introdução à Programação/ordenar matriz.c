#include<stdio.h>
#include<stdlib.h>
#define linha 2
#define coluna 2
int main()
{
    int mat[linha][coluna],aux;
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            printf("Informe um numero: ");
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<linha;i++)
    {
        for (int j=0;j<coluna;j++)
        {
            for(int k=0;k<linha;k++)
            {
                for (int l=0; l<coluna;l++)
                {
                    if(mat[i][j]<mat[k][l])
                    {
                        aux= mat[i][j];
                        mat[i][j]=mat[k][l];
                        mat[k][l]=aux;
                    }
                }
            }
        }
    }
    printf("\nOrdenado: \n");
    for (int i=0;i<linha;i++)
    {
        for( int j=0;j<coluna;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
