#include<stdio.h>
#include<stdlib.h>
int main()
{
    int mat[6][3],maior_i,maior_j,menor_i,menor_j=0,maior,menor;
    for(int i =0;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Digite para a matriz [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    maior=menor=mat[0][0];
    for(int i =0;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(mat[i][j]>maior)
            {
                maior=mat[i][j];
                maior_i=i;
                maior_j=j;
            }
            if(mat[i][j]<menor)
            {
                menor=mat[i][j];
                menor_i=i;
                menor_j=j;
            }
        }
    }


    int i,j;
    printf("O maior elemento da matriz eh %d e esta na posicao [%d][%d]\n",maior,maior_i,maior_j);
    printf("O menor elemento da matriz eh %d e esta na posicao [%d][%d]",menor,menor_i,menor_j);

    return 0;
}
